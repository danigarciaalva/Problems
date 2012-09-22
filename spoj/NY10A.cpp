/* Sphere Online Judge
 * NY10A - Penney Game
 */
 
#include <iostream>
#include <vector>
using namespace std;

/* Algoritmo Knuth-Morris-Pratt para encontrar todas las ocurrencias de un patron K en una string S 
 * Basta con saber que es un algoritmo para encontrar subcadenas,  cualquiera otro hubiera servido */
int KMP(string S, string K)
{
        vector<int> T(K.size() + 1, -1);
        for(int i = 1; i <= K.size(); i++)
        {
                int pos = T[i - 1];
                while(pos != -1 && K[pos] != K[i - 1]) pos = T[pos];
                T[i] = pos + 1;
        }

        vector<int> matches;
        int sp = 0;
        int kp = 0;
        while(sp < S.size())
        {
                while(kp != -1 && (kp == K.size() || K[kp] != S[sp])) kp = T[kp];
                kp++;
                sp++;
                if(kp == K.size()) matches.push_back(sp - K.size());
        }

		/* En el vector matches se guardan los indices a cada una de las ocurrencias, por tanto el tamaño
		 * de dicho vector nos dirá cuantas ocurrencias se han encotrado. */
        return matches.size();
}

/* La principal clave estaba en saber que las ocurrencias de cada patron se podían solapar, lo que lleva 
 * a pensar en todas las posibles ocurrencias del patron (o subcadenas) */
int main(){
	int N, testcase, matches;
	string tosses, toss[8];
	/* en toss[i] (0 < i < 8) estaran los 8 patrones fijos que hay que buscar en cada string que recibamos */
	toss[0] = "TTT";
	toss[1] = "TTH";
	toss[2] = "THT";
	toss[3] = "THH";
	toss[4] = "HTT";
	toss[5] = "HTH";
	toss[6] = "HHT";
	toss[7] = "HHH";

	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> testcase;
		cin >> tosses;
		cout << testcase;
		/* Se busca la cantidad de ocurrencias de cada uno de los 8 patrones fijos */
		for(int j = 0; j < 8; j++) {
			matches = KMP(tosses, toss[j]);
			cout << " " << matches;
		}
		cout << endl;
	}
}

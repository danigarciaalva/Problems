/* Sphere Online Judge
 * Problema: HACKRNDM - Hacking the random number generator
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 23-11-2011
 */
#include <iostream>
#include <set>
using namespace std;

/* Se usa set para encontrar elementos en O(logN). Si la diferencia
 * entre los numeros A y B es K, entonces A+K=B. Por cada numero ingresado
 * se busca si Xi+K esta en el conjunto. */
int main(){
	long long N, K, n, c=0;
	set<long long> s;

	cin >> N >> K;
	while(N>0){
		cin >> n;
		s.insert(n);
		N--;
	}

	for(set<long long>::const_iterator it = s.begin(); it != s.end(); it++) { 
		if(s.find(*it+K) != s.end())
			c++;
	} 
	cout << c << endl;
}

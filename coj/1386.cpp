/* Caribbean Online Judge
 * Problema: 1386 - Unearthing treasures
 * Categoria: Teoría de números
 * 
 * Israel Leiva - 13-11-2011
 */
#include <iostream>
#include <vector>
using namespace std;

/* Se obtienen los factores de cada numero y se muestran */
int main(){
	vector<int> f1, f2;
	int P, Q, i, j;
	cin >> P >> Q;
	for(i=1;i<=P;i++){
		if(P%i == 0)
			f1.push_back(i);
	}
	
	for(i=1;i<=Q;i++){
		if(Q%i == 0)
			f2.push_back(i);
	}
	
	for(i=0;i<f1.size();i++){
		for(j=0;j<f2.size();j++)
			cout << f1[i] << " " << f2[j] << endl;
	}
}

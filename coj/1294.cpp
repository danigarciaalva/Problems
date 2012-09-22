/* Caribbean Online Judge
 * Problema: 1294 - Jolly Jumpers
 * Categoria: Ad hoc 
 * 
 * Israel Leiva - 07-12-2011
 */
#include <iostream>
#include <set>
#include <cmath>
#include <cstdlib>
using namespace std;

/* Primero se usa un conjunto con todos los valores de 1 hasta N-1 
 * (conjunto objetivo) y luego con los numeros ingresados se calculan las
 * diferencias entre ellos en un nuevo conjunto (para evitar repeticiones).
 * Si ambos conjuntos son iguales entonces es una secuencia Jolly.  */
int main(){
	set<long long> seq, difs;
	long long N, k, last, i;
	while(cin >> N){
		seq.clear();
		difs.clear();
		cin >> k;
		/* conjunto objetivo */
		for(i=1;i<N;i++)
			seq.insert(i);
			
		N--;
		if(N==0)
			cout << "Jolly" << endl;
		else{
			last=k;
			while(N>0){
				cin >> k;
				/* conjunto de diferencias */
				difs.insert(abs(last-k));
				last=k;
				N--;
			}
			/* igualdad de conjuntos */
			(seq == difs) ? cout << "Jolly" : cout << "Not jolly";
			cout << endl;

		}
	}
}

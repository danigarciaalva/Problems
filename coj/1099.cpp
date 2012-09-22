/* Caribbean Online Judge
 * Problema: 1099 - Pythagorean Numbers
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
using namespace std;

/* Tres numeros son pitagoricos si la suma entre los cuadrados de dos
 * de sus numeros es igual al cuadaro del tercero: A^2 + B^2 = C^2 */
int main(){
	unsigned long long N1, N2, N3;
	while(cin >> N1 >> N2 >> N3){
		N1 *= N1;
		N2 *= N2;
		N3 *= N3;
		
		if( (N1+N2) == N3 )
			cout << "right" << endl;
		else if( (N2+N3) == N1 )
			cout << "right" << endl;
		else if( (N1+N3) == N2 )
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}

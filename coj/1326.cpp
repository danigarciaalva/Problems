/* Caribbean Online Judge
 * Problema: 1326 - Account Balance
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 13-11-2011
 */
#include <iostream>
using namespace std;

/* Dada una cantidad de dinero y una cantidad de transacciones de prestamo
 * o deuda, determinar el monto final */
int main(){
	int N, T, i, j;
	char type;
	long long B, t;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> B >> T;
		for(j=0;j<T;j++){
			cin >> type >> t;
			(type == 'C') ? B+=t : B-=t;
		}
		cout << B << endl;
	}
}

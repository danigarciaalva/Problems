/* Caribbean Online Judge
 * Problema: 1049 - Sum
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
using namespace std;

/* Solo mencionar que la sumatoria de numeros es entre 1 y N, por lo que
 * cuando N es negativo a la sumatoria final se le debe "restar" ese uno
 * (o sumar mejor dicho).
 *  */
int main(){
	int N;
	cin >> N;
	if(N>=0)
		cout << (N*(N+1))/2;
	else
		cout << (((N*-1)*((N*-1)+1)/2)*-1)+1;
	cout << endl;
}

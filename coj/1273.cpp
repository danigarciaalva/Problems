/* Caribbean Online Judge
 * Problema: 1273 - Domino Factory
 * Categoria: Formula
 * 
 * Israel Leiva - 14-11-2011
 */
#include <iostream>
using namespace std;

/* La clave esta en saber que para un domino de valor maximo N, hay
 * ((N+1)(N+2))/2 posibles piezas (para 0 hay 1 pieza, para 2 hay 3
 * piezas, etc. Por tanto es la sumatoria de los n+1 naturales. */
int main(){
	unsigned long long int T, N, L, W;
	cin >> T;
	while(T>0){
		cin >> N >> L >> W;
		N++;
		cout << ((N*(N+1))/2)*(L*W) << endl;
		T--;
	}
}

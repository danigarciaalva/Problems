/* Caribbean Online Judge
 * Problema: 1566 - Cannon Balls
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 17-11-2011
 */
#include <iostream>
using namespace std;

/* La piramide se construye en base a cuadrados de bolas, con una sola en
 * el tope. Solo hay que sumar los cuadrados de N, N-1, .. hasta 1, cada
 * uno representa un piso y la cima respectivamente.
 *  */
int main(){
	int N, i;
	unsigned long long int sqrs[501]={0};

	for(i=1;i<=500;i++)
		sqrs[i] = sqrs[i-1]+i*i;

	while(cin >> N){
		if(!N) break;
		cout << sqrs[N] << endl;
	}
}

/* Sphere Online Judge
 * Problema: SAMER08F - Feynman
 * Categoria: Programación Dinámica
 * 
 * Israel Leiva - 12-01-2012
 */
#include <iostream>
using namespace std;

unsigned long long sq[101] = {0};

unsigned long long squares(int N){
	if(N == 1){
		sq[1] = 1;
		return sq[1];
	}else{
		if(sq[N] == 0)
			sq[N] = N*N + squares(N-1);
		return sq[N];
	}
}

/* Examinando los casos de prueba se llega al caso base y formula recursiva
 * para obtener los cuadrados y rectangulos.
 *  */
int main(){
	int N;
	while(cin >> N){
		if(!N) break;
		cout << squares(N) << endl;
	}
}

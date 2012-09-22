/* Caribbean Online Judge
 * Problema: 1070 - A Simple Calculation
 * Categoria: Programación Dinámica
 * 
 * Israel Leiva - 11-11-2011
 */
#include <iostream>
using namespace std;

unsigned long long sq[101] = {0}, rc[101] = {0};

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

unsigned long long rectangles(int N){
	if(N == 1){
		rc[1] = 1;
		return rc[1];
	}else{
		if(rc[N] == 0)
			rc[N] = N*N*N + rectangles(N-1);
		return rc[N];
	}
}

/* Examinando los casos de prueba se llega al caso base y formula recursiva
 * para obtener los cuadrados y rectangulos.
 *  */
int main(){
	int N;
	while(cin >> N){
		cout << squares(N) << " " << rectangles(N) << endl;
	}
}

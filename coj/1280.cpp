/* Caribbean Online Judge
 * Problema: 1280 - Walk Like an Egyptian
 * Categoria: Formula
 * 
 * Israel Leiva - 14-11-2011
 */
#include <iostream>
using namespace std;


/* Realizando las pruebas para Ns chicos se puede verificar que sin importar
 * cual se el valor de este, siempre la esquina superior derecha contendra el valor
 * de (N-1)*(N-1)+N. Para un una piramide de tamaño N, la piramide anterior siempre
 * terminara bien en la esquina superior izquierda o bien en la esquina inferior
 * derecha, por lo tanto para llegar a la esquina superor izquierda hay que sumar
 * N */
int main(){
	int N;
	while(cin >> N){
		if(!N) break;
		cout << N << " => " << ((N-1)*(N-1))+N << endl;
	}
}

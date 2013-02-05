/* Caribbean Online Judge
 * Problema: 1051 - Div 3
 * Categoria: Formula
 * 
 * Israel Leiva - 11-11-2011
 */
#include <iostream>
using namespace std;

/* Estudiando los casos de prueba hasta n = 10 se pude conjeturar que cuando n es multiplo
 * de 3 (a excepcion del 1), el n-esimo termino tambien lo sera. 
 *  */
int main(){
	unsigned long long N;
	cin >> N;
	cout << N-(((N-1)/3)+1) << endl;
}

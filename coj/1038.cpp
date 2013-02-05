/* Caribbean Online Judge
 * Problema: 1038 - Digits
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
#include <string>
using namespace std;

/* Luego de comprobar con algunos casos de prueba se puede notar que 
 * esto se cumple sólo cuando la cantidad de dígitos es 1, luego de esto 
 * Xi valdrá 1 y Xi+1 la cantidad de dígitos que posee 1, o sea, 1, 
 * cumpliéndose que Xi = Xi-1. Si se considera un número de 999 999 
 * dígitos como X0:
 * 
 * - X1 será 999 999
 * - X2 será 6
 * - X3 será 1
 * - X4 será 1
 *
 * Y se llega a X3=X4. Por lo tanto ninguna se irá más allá de una 
 * cuarta iteración para llegar a Xi=Xi-1. 
 * */
int main(){
	string num;
	while(cin >> num){
		if(num == "END")
			break;
			
		if(num == "1")
			cout << "1";
		else if(num.length() < 2 && num != "1")
			cout << "2";
		else if(num.length() < 10)
			cout << "3";
		else
			cout << "4";
		
		cout << endl;
	}
}

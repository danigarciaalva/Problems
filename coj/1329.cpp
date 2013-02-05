/* Caribbean Online Judge
 * Problema: 1329 - Do the Flea Full Travel
 * Categoria: Formula
 * 
 * Israel Leiva - 20-11-2011
 */
#include <iostream>
using namespace std;

/* Probando para n < 10 se puede conjeturar que es posible visitar todos
 * los hassocks solo si la cantidad es potencia de 2. Dado que N < 1000, solo
 * hay que comprobar hasta 512 (la siguiente potencia es mayor a 1000) */
int main(){
	int T, h;
	cin >> T;
	while(T>0){
		cin >> h;
		if(h==1 || h==2 || h==4 || h==8 || h==16 || h==32 || h==64 || h==128 || h==256 || h==512)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
		T--;
	}
}

/* Caribbean Online Judge
 * Problema: 1073 - Dominoes Chips on Game
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 12-11-2011
 */
#include <iostream>
using namespace std;

/* Despues de probar algunos casos de prueba se llega a la conclusion
 * de que sea cual sea la manera en que se ponen los dominos, el jugador
 * que comienza jugando siempre perdera. El problema se reduce a comprobar
 * que las posiciones iniciales sean validas. */
int main(){
	short int P, r1, c1, r2, c2;
	bool valid;
	while(cin >> P >> c1 >> r1 >> c2 >> r2){
		valid=true;
		if(c2 > c1+1 || c2 < c1-1 || r2 > r1+1 || r2 < r1-1)
			valid=false;
		else{
			if(r2 == r1+1 || r2 == r1-1){
				if(c1 != c2)
					valid = false;
			}else if(r2 == r1){
				if(c2 != c1+1 && c2 != c1-1)
					valid = false;
			}
		}
		if(valid)
			(P == 1) ? cout << "2" : cout << "1";
		else
			cout << "ERROR";
		cout << endl;
	}
}

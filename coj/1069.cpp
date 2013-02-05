/* Caribbean Online Judge
 * Problema: 1069 - Soda Surpler
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 11-11-2011
 */
#include <iostream>
using namespace std;

/* La clave esta en considerar la compra de nuevas botellas acorde a las
 * botellas vacias que van quedando */
int main(){
	int N, i, F, C, E, LE, sodas;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> E >> F >> C;
		sodas=0;
		E += F;
		LE = E;
		while(E>=C){
			sodas += E/C;
			/* E/C = Cantidad de nuevas botellas vacias con E%C como resto */
			E = E/C + E%C;
			/* Si LE y E son iguales entonces se entra en un ciclo infinito */
			if(E == LE){
				sodas=0;
				break;
			}
			LE = E;
		}
		cout << sodas << endl;
	}
}

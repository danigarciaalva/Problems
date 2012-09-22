/* UVA Online Judge
 * Problema: 10327 - Flip Sort
 * Categoria: Taller de Programacion - Ordenamiento
 * 
 * Israel Leiva - 17-12-2011
 */
#include <iostream>
using namespace std;

/* Se itera a traves de la secuencia mientras no este ordenada. En cada
 * iteracion se comprueba si se debe realizar un intercambio entre elementos
 * (es decir, que el numero del elemento izquierdo es mayor que el derecho). 
 * */
int main(){
	int N, L, i, j, swaps, line_swaps, aux;
	unsigned long seq[1001];
	while(cin >> L){
		if(L == 0){
			cout << "Minimum exchange operations : 0" << endl;
		}else if(L == 1){
			cin >> seq[0];
			cout << "Minimum exchange operations : 0" << endl;
		}else{
			swaps = 0;
			
			cin >> seq[0];
			for(j=1;j<L;j++){
				cin >> seq[j];
				if(seq[j-1] > seq[j]){
					aux = seq[j-1];
					seq[j-1] = seq[j];
					seq[j] = aux;
					swaps++;
				}
			}
					
			do{
				/* Line_swaps permite saber si se realizo algun cambio al
				 * momento de recorrer toda la secuencia. Cuando sea cero
				 * entonces no hay que hacer mas swapping. */
				line_swaps = 0;
				for(j=1;j<L;j++){
					if(seq[j-1] > seq[j]){
						aux = seq[j-1];
						seq[j-1] = seq[j];
						seq[j] = aux;
						line_swaps++;
						swaps++;
					}
				}
			}while(line_swaps > 0);
			cout << "Minimum exchange operations : " << swaps << endl;
		}
	}
}

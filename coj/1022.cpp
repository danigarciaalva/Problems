/* Caribbean Online Judge
 * Problema: 1022 - Train Swapping
 * Categoria: Ordenamiento
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
using namespace std;

/* Se itera a traves del tren mientras este no este ordenado. En cada
 * iteracion se comprueba si se debe realizar un intercambio entre carros
 * (es decir, que el numero del carro izquierdo es mayor que el derecho). 
 * */
int main(){
	int N, L, i, j, train[50], swaps, line_swaps, aux_carriage;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> L;
		if(L == 0)
			cout << "Optimal train swapping takes 0 swaps." << endl;
		else if(L == 1){
			cin >> train[0];
			cout << "Optimal train swapping takes 0 swaps." << endl;
		}else{
			for(j=0;j<L;j++)
				cin >> train[j];
				
			swaps = 0;
			do{
				line_swaps = 0;
				for(j=1;j<L;j++){
					if(train[j-1] > train[j]){
						aux_carriage = train[j-1];
						train[j-1] = train[j];
						train[j] = aux_carriage;
						line_swaps++;
						swaps++;
					}
				}
			}while(line_swaps > 0);
			cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
		}
	}
}

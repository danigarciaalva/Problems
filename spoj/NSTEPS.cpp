/* Sphere Online Judge
 * Problema: NSTEPS - Number Steps
 * Categoria: Formula
 * 
 * Israel Leiva - 30-11-2011
 */
#include <iostream>
using namespace std;

/* Observando la ilustracion grafica se concluye que el valor de Y esta
 * directament relacionado al valor de X. Cuando X es par, Y es par y solo
 * puede tener dos valores, y == x o y == x-2. En cualquier otro no sirve.
 * Lo mismo para Y. Luego la formula viene dada por 2*x, 2*x-2 y 2*x-1,
 * 2*x-3 para numeros pares e impares respectivamente. */
int main(){
	int N, x, y;

	cin >> N;
	while(N>0){
		cin >> x >> y;

		if(y!=x && y!=x-2)
			cout << "No Number";
		else{
			if(x%2==0){
				if(x==y)
					cout << 2*x;
				else
					cout << 2*x-2;
			}else{
				if(x==y)
					cout << (2*x)-1;
				else
					cout << (2*x)-3;
			}
		}
		cout << endl;
		
		N--;
	}
}

/* Caribbean Online Judge
 * Problema: 1472 - Lucky Sequence Again
 * Categoria: Combinatoria
 * 
 * Israel Leiva - 25-11-2011
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* Dado que son 4 numeros (o elementos) los que se ocupan, es necesario
 * utilizar mod 4. Por ejemplo, para n<=4, n%4 devuelve el numero
 * deseado. Ojo que 4%4 da 0, por eso el 7 esta en la primera posicion del
 * arreglo, la posicon 0. Luego para n>4, n%4 da la posicion de la cifra
 * menos significativa, y para saber las siguientes hay que dividir por 4.
 * Por ej: n=6, n%4=2 (numero 3), n=n/4 y n%4=1 (numero 2), n=n/4 lo que
 * da 0 por tanto se termino. Esto nos da que el sexto numero es 23, lo
 * cual es cierto. Por ultimo mencionar que cuando n es multiplo de 4 hay
 * que tener cuidado ya que realiza una iteracion de mas al llegar al final, 
 * por lo que hay que restarle uno (por ejemplo con n=4). */
int main(){
	int T;
	short seq[4] = {7, 2, 3, 5};
	unsigned long long N;
	string lucky;
	cin >> T;
	
	while(T>0){
		cin >> N;
		lucky.clear();
		while(N>0){
			lucky.push_back(seq[N%4]+'0');
			if(N%4==0) N--;
			N = N/4;
		}
		reverse(lucky.begin(), lucky.end());
		cout << lucky << endl;
		T--;
	}
}

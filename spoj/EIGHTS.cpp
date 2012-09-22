/* Sphere Online Judge
 * Problema: EIGHTS - Triple Fat Ladies
 * Categoria: Formula
 * 
 * Israel Leiva - 05-12-2011
 */
#include <iostream>
using namespace std;

/* Con paciencia se decubre que el segundo numero que termina en 888 es
 * 192+250. Luego probe con el segundo+250, tercero+250 y resulto ser asi :-)
 *  */
int main(){
	unsigned int T;
	unsigned long long k;
	cin >> T;
	while(T>0){
		cin >> k;
		k=192+250*(k-1);
		cout << k << endl;
		T--;
	}
}

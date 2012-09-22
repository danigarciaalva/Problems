/* Sphere Online Judge
 * Problema: BEENUMS - Beehive Numbers
 * Categoria: Formula
 * 
 * Israel Leiva - 03-12-2011
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* Se parte de la base de un hexagono: para que no sea una celda externa
 * necesita 6 celdas mas. Luego de estas 7 celdas, para que ninguna de ellas
 * sea externa hay que agregar 12. Luego para esas 19 se agregan 18, asi 
 * sucesivamente. */
int main(){
	int sides=1;
	long long N, i;
	vector<unsigned long> v;

	sides=0;
	i=1;
	/* Generamos todos los numeros hasta el tamanio limite */
	while(i<=1000000000){
		i=i+6*sides;
		sides++;
		v.push_back(i);
	}
	while(cin >> N){
		if(N==-1) break;
		/* Con busqueda binaria se disminuye el tiempo de respuesta */
		(binary_search (v.begin(), v.end(), N)) ? cout << "Y" : cout << "N";
		cout << endl;
	}
}

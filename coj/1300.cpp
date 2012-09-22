/* Caribbean Online Judge
 * Problema: 1300 - Modulo
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 14-11-2011
 */
#include <iostream>
#include <set>
using namespace std;

/* Se almacenan todos los modulos en un conjunto, dado que este ultimo
 * no almacena repeticiones de elementos */
int main(){
	set<int> s;
	short int N=10;
	int num;
	while(N>0){
		cin >> num;
		s.insert(num%42);
		N--;
	}
	cout << s.size() << endl;
}

/* Caribbean Online Judge
 * Problema: 1485 - Increasing Order Word
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 13-11-2011
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/* Se lee la cadena y se ordena lexicograficamente */
int main(){
	string t;
	cin >> t;
	sort(t.begin(), t.end());
	cout << t << endl;
}

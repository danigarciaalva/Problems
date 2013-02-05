/* Caribbean Online Judge
 * Problema: 1483 - Geometrical Task I
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 13-11-2011
 */
#include <iostream>
#include <string>
using namespace std;

/* El area se devuelve segun el area leida */
int main(){
	string shape;
	int A, B;
	cin >> shape >> A;
	if(shape == "square")
		B = A;
	else
		cin >> B;
	cout << A*B << endl;
}

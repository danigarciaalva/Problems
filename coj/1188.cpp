/* Caribbean Online Judge
 * Problema: 1188 - Cow Multiplication
 * Categoria: Aritmética y Álgebra
 * 
 * Israel Leiva - 15-11-2011
 */
#include <iostream>
#include <string>
using namespace std;

/* Se tratan los enteros como cadenas para poder tomar cada digito por 
 * separado */
int main(){
	string A, B;
	int i, j, sum=0;
	cin >> A >> B;
	for(i=0;i<A.size();i++)
		for(j=0;j<B.size();j++)
			sum+=(A[i]-'0')*(B[j]-'0');
	cout << sum << endl;
}

/* Sphere Online Judge
 * Problema: SCPC11D - Egypt
 * Categoria: Geometria
 * 
 * Israel Leiva - 01-12-2011
 */
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/* Para saber si es triangulo equilatero se debe cumplir el teorema de
 * Pitagores A^2 + B^2 = C^2 */
int main(){
	unsigned long long int t[3], H;
	while(cin >> t[0] >> t[1] >> t[2]){
		if(!t[0] && !t[1] && !t[2]) break;
		sort(t, t+3);
		H = sqrt(t[0]*t[0] + t[1]*t[1]);
		(H==t[2]) ? cout << "right" : cout << "wrong";
		cout << endl;
	}
}

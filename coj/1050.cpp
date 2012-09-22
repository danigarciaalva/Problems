/* Caribbean Online Judge
 * Problema: 1050 - Coprimes
 * Categoria: Teoría de números
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
using namespace std;

/* Greatest common divisor */
long gcd(long a, long b){
	if(a%b == 0)
		return b;
	else
		return gcd(b, a%b);
}

/* Dos numeros son coprimos entre ellos si el unico divisor en comun
 * entre ellos es 1.
 *  */
int main(){
	int i, N, num_coprimes=0;
	cin >> N;
	for(i=1;i<N;i++){
		if(gcd(i, N) == 1)
			num_coprimes++;
	}
	cout << num_coprimes << endl;
}

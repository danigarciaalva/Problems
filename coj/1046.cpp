/* Caribbean Online Judge
 * Problema: 1046 - Product Subsequence
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
using namespace std;

/* Realizar el ciclo y calcular el producto.*/
int main(){
	int N, i, j, li, ld;
	unsigned long long sum;
	
	cin >> N;
	for(i=0;i<N;i++){
		sum=0;
		cin >> li >> ld;
		for(j=li;j<=ld;j++)
			sum += (j*(j+1)*(j+2))%100;
		
		sum %= 100;
		cout << sum << endl;
	}
}

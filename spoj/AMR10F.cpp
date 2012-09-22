/* Sphere Online Judge
 * Problema: AMR10F - Cookie Piles
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 01-12-2011
 */
#include <iostream>
using namespace std;

/* Solo hay que sumar N veces desde la base A aumentando D*i, 0<=i<N */
int main(){
	int T, N, A, D, i, sum;
	cin >> T;
	while(T>0){
		cin >> N >> A >> D;
		sum=0;
		for(i=0;i<N;i++)
			sum+=A+D*i;
		cout << sum << endl;
		T--;
	}
}

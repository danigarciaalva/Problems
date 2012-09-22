/* Sphere Online Judge
 * Problema: CANDY3 - Candy III
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 21-11-2011
 */
#include <iostream>
using namespace std;

/* Es muy similar al problema "Another Candies", la unica diferencia es 
 * que la suma de dulces puede ser muy grande, por tanto es necesaria 
 * setearla a cero cada vez que se obtiene un valor mayor a N (ya que solo
 * nos interesa saber si el resultado final es multiplo de N) */
int main(){
	unsigned long long T, i, j, N, candies;
	unsigned long long sum;
	cin >> T;
	for(i=0;i<T;i++){
		sum=0;
		cin >> N;
		for(j=0;j<N;j++){
			cin >> candies;
			sum+=candies;
			if(sum>N)
				sum=sum%N;
		}

		if(sum == 0)
			cout << "YES";
		else if((sum%N == 0))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
}

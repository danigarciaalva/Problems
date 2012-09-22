/* Caribbean Online Judge
 * Problema: 1078 - Another Candies
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 19-11-2011
 */
#include <iostream>
using namespace std;

/* El caso tricky es cuando hay cero dulces :) */
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

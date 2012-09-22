/* Sphere Online Judge
 * Problema: CANDY - Candy I
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 21-11-2011
 */
#include <iostream>
using namespace std;

/* Si es posible dividir la cantidad de dulces (que la suma sea un multiplo
 * de la cantidad de ninios), entonces el minimo numero de movidas es la 
 * cantidad de dulces que faltan para que todos sean iguales a suma/N,
 */
int main(){
	int i, N, m;
	unsigned long long sum, candies[10001], c;
	while(cin>>N){
		if(N==-1) break;
		sum=c=0;
		for(i=0;i<N;i++){
			cin >> candies[i];
			sum+=candies[i];
		}
		if(sum%N !=0)
			cout << "-1" << endl;
		else{
			m=sum/N;
			for(i=0;i<N;i++)
				if(candies[i]<m)
					c+=m-candies[i];
			cout << c << endl;
		}
	}
}

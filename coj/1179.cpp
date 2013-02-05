/* Caribbean Online Judge
 * Problema: 1179 - Optimal Parking
 * Categoria: Ad hoc
 * Israel Leiva - 15-11-2011
 */
#include <iostream>
#include <algorithm>
using namespace std;

/* La manera mas optima de estacionar y recorrer la menor distancia es ir
 * hasta la que esta mas lejos, desde ahi visitarlas todas y luego 
 * devolverse.
 */

int main(){
	int T, N, i, stores[21], dist;
	cin >> T;
	while(T>0){
		cin >> N;
		for(i=0;i<N;i++)
			cin >> stores[i]; 

		sort(stores, stores+N);
		dist=0;
		for(i=N-2;i>=0;i--)
			dist+=stores[i+1]-stores[i];
		dist+=dist;
		cout << dist << endl;
		T--;
	}
}

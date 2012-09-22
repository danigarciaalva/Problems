/* Sphere Online Judge
 * Problema: FEELUCK - Google is Feeling Lucky
 * Categoria: Ordenamiento
 * 
 * Israel Leiva - 22-11-2011
 */
#include <iostream>
#include <algorithm>
using namespace std;

/* Habia que estar atento a que se muestran en el orden en el que van
 * siendo leidos en el caso de que haya empate, por lo tanto es necesario
 * agregar otro criterio de ordenacion. */
int main(){
	int T, i, max, c=0;
	pair< pair<int, int>, string> sites[10];
	cin >> T;
	while(T>0){
		c++;
		cout << "Case #" << c << ":" << endl;
		for(i=0;i<10;i++){
			cin >> sites[i].second >> sites[i].first.first;
			sites[i].first.second = 10-i;
		}
		sort(sites, sites+10);
		max = sites[9].first.first;
		cout << sites[9].second << endl;
		for(i=8;i>=0;i--){
			if(sites[i].first.first < max)
				break;
			cout << sites[i].second << endl;
		}
		T--;
	}
}

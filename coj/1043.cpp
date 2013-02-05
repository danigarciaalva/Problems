/* Caribbean Online Judge
 * Problema: 1043 - Simple dishes
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
using namespace std;

/* Los pesos utilizados son potencias de dos, por tanto sólo es necesario
 * saber cuantos bits están seteados a 1. */
int main(){
	int N, i, j;
	bool first;
	unsigned long long k;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> k;

		first = false;
		for(j=0;j<16;j++){
			if((k & 1 << j) != 0){
				if(!first){
					cout << j;
					first = true;
				}else
					cout << " " << j;
			}
		}	
		cout << endl;
	}
}

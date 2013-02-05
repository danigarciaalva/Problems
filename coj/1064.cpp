/* Caribbean Online Judge
 * Problema: 1064 - Alarm Clock
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 11-11-2011
 */
#include <iostream>
using namespace std;

/* Calcular diferencia de minutos entre dos horas. El unico pero es que
 * dichas horas pueden ser de un dia para otro */
int main(){
	int h1, m1, h2, m2, total1, total2;
	while(cin >> h1 >> m1 >> h2 >> m2){
		if(!h1 && !m1 && !h2 && !m2) break;
		total1 = h1*60+m1;
		total2 = h2*60+m2;
		if(total2 < total1) total2 += 60*24;
		cout << total2-total1 << endl;
	}
}

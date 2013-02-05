/* Caribbean Online Judge
 * Problema: 1357 - Being Late
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 22-11-2011
 */
#include <iostream>
using namespace std;

/* Solo habia que calcular diferencia entre horas, nada mas */
int main(){
	int N, i, min_late, ah, am, oh, om;
	while(cin >> N){
		min_late=0;
		for(i=0;i<N;i++){
			cin >> oh >> om >> ah >> am;
			if(ah > oh || (oh == ah && am > om)){
				min_late+=((ah*60+am)-(oh*60+om));
			}
		}
		cout << min_late/N << endl;
	}
}

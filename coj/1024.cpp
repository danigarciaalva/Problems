/* Caribbean Online Judge
 * Problema: 1024 - Hangover
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
using namespace std;

/* Simple sumatoria hasta igual o sobrepasar el valor leido. La formula
 * esta en el problema */
int main(){
	float num_cards, length_sums;
	int i;
	while(cin >> num_cards){
		if(num_cards == 0.00)
			break;
			
		length_sums = 0.00;
		for(i=2;;i++){
			length_sums += 1.00/(float)i;
			if(length_sums == num_cards || length_sums > num_cards)
				break;
		}
		cout << i-1 << " card(s)" << endl;
	}
}

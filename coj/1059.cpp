/* Caribbean Online Judge
 * Problema: 1059 - Numeric Parity
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 11-11-2011
 */
#include <iostream>
using namespace std;

/* Se recorre y comprueba la paridad del numero con operaciones a nivel
 * de bit */
int main(){
	int i, parity;
	bool found;
	unsigned long long N;
	while(cin >> N){
		if(!N) break;
		parity=0;
		found=false;
		cout << "The parity of ";
		for(i=0;i<32;i++){
			if((N & 1 << 31-i) != 0){
				parity++;
				cout << "1";
				found=true;
			}else{
				if(found)
					cout << "0";
			}
		}
		cout << " is " << parity << " (mod 2)." << endl;
	}
}

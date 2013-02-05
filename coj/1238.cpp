/* Caribbean Online Judge
 * Problema: 1238 - Factorial Again!
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 22-11-2011
 */
#include <iostream>
#include <string>
using namespace std;

/* Leer como cadena y operar como numero restando el caracter '0' :) */
int main(){
	int i, l, sz, f[5] = {1, 2, 6, 24, 120};
	unsigned long long r;
	
	string n;
	while(cin >> n){
		if(n=="0") break;
		r=0;
		(n[0]=='-') ? l=1 : l=0;
		sz=n.length()-1;
		for(i=sz-l;i>=0;i--)
			r += (n[sz-i]-'0')*f[i];
		
		if(l) cout << "-";
		cout << r << endl;
	}
}

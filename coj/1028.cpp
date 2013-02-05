/* Caribbean Online Judge
 * Problema: 1028 - All in all
 * Categoria: Cadenas
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
#include <string>
using namespace std;

/* Simple iteracion de caracteres de la primera cadena sobre la segunda.
 * Hay que tener en cuenta que los caracacteres deben aparecer ordenados
 * (aunque no adyacentes), por lo que esto va disminuyendo la cantidad
 * de iteraciones del for mas anidado. */
int main(){
	string s, t;
	int i, j, similar, lc;
    while(cin >> s >> t){
		similar = 0;
		if(s == t)
			similar = s.length();
		else if(s.length() < t.length()){
			lc=0;
			for(i=0;i<s.length();i++){
				for(j=lc;j<t.length();j++){
					if(s[i] == t[j]){
						similar++;
						t[j] = '*';
						break;
					}
				}
				lc=j;
			}
		}
		if(similar == s.length())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
    }
}

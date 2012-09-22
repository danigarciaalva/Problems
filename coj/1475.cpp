/* Caribbean Online Judge
 * Problema: 1475 - Cedric's Cypher
 * Categoria: Cadenas
 * 
 * Israel Leiva - 14-11-2011
 */
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;

/* Leer linea a linea, encontrar shift de A y descifrar */
int main(){
	char txt[256];
	char c='.', cA;
	int i, sz, shift, nshift;
	
	scanf("%[^\n]", txt);
	sz=strlen(txt);
	getchar();

	while(!(txt[0] == '#' && sz == 1)){
		cA = txt[sz-1];
		shift = cA-'A';
		for(i=0;i<sz-1;i++){
			if(isalpha(txt[i])){
				if(islower(txt[i]) && txt[i]-shift < 'a'){
					nshift = shift-(txt[i]-'a')-1;
					txt[i] = 'z'-nshift;
				}else if(isupper(txt[i]) && txt[i]-shift < 'A'){
					nshift = shift-(txt[i]-'A')-1;
					txt[i] = 'Z'-nshift;
				}else
					txt[i] = txt[i]-shift;
			}
			printf("%c", txt[i]);
		}
		printf("\n");

		scanf("%[^\n]", txt);
		sz=strlen(txt);
		getchar();
	}		
}

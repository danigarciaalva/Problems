/* Caribbean Online Judge
 * Problema: 1177 - Group Reverse
 * Categoria: Cadenas
 * 
 * Israel Leiva - 03-12-2011
 */
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

/* Se aprovecha la utilidad reverse de la STL (algorithm), ya que permite
 * invertir un vector entre intervalos. */
int main(){
	short G, L, i;
	char s[101];
	while(true){
		scanf("%d", &G);
		if(!G) break;
		scanf("%s", s);
		L = strlen(s)/G;
		for(i=0;i<strlen(s);i+=L)
			reverse(s+i, s+i+L);
		printf("%s\n", s);
	}
}

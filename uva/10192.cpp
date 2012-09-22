/* UVA Online Judge
 * Problema: 10192 - Vacation
 * Categoria: Taller de Programacion - Programacion Dinamica
 * 
 * Israel Leiva - 24-12-2011
 */
#include <vector>
#include <cstdio>
#include <cstring>
using namespace std;

/* El problema se puede modelar como un algoritmo conocido: Longest
 * Common Subsequence, el cual busca la secuencia (en orden pero no 
 * necesariamente contigua) mas larga que tengan en comun dos cadenas */

vector< vector<int> > c(101, vector<int>(101,0));

/* Implementacion de Longest Common Subsequence */
int lcs(char *X, char *Y){
	int m, n, i, j;
    m = strlen(X), n = strlen(Y);

    for (i=0;i<=m;i++)
         for (j=0;j<=n;j++)
             c[i][j]=0;

    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++) {
            if (X[i-1]==Y[j-1])
               c[i][j]=c[i-1][j-1]+1;
            else
                c[i][j]=max(c[i][j-1],c[i-1][j]);
        }
    
    return c[m][n];
}

/* Se leen las dos cadenas (hasta el fin de linea, asi que puede estar
 * compuesta de varias palabras, incluyendo los espacios) y se aplica
 * el LCS */
int main(){
	int max, i, caso = 0;
	char s1[101], s2[101];
    while(true){
		i=0;
		while( (s1[i]=getchar()) != '\n' ) i++;
		s1[i] = '\0';
		if(!strcmp(s1, "#")) break;
		
		i=0;
		while( (s2[i]=getchar()) != '\n' ) i++;
		s2[i] = '\0';
		
		max = lcs(s1, s2);
		caso++;
		printf("Case #%d: you can visit at most %d cities.\n", caso, max);
	}
    
}

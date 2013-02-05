/* Caribbean Online Judge
 * Problema: 1143 - To and Fro
 * Categoria: Cadenas
 * 
 * Israel Leiva - 04-12-2011
 */
#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>

/* Sabiendo que se almacena el msg en un arreglo bidimensional, lo primero
 * es invertir las "filas" pares y luego imprimir columna a columna.
 * 
 * Por ejemplo, para el mensaje hola con llave c=2 se tiene el msg encriptado
 * como sigue:
 * 
 * hl
 * ao
 * 
 * Lo primero es invertir las columnas pares:
 * 
 * hl
 * oa
 * 
 * Y luego imprimir columna a columna (- es para diferenciar columnas):
 * 
 * ho-la
 * 
 *   */
int main(){
	int col, L, i, j;
	char s[201], c;
	while(true){
		scanf("%d\n", &col);
		if(!col) break;
		
		i=0;
		while((c=getchar()) != '\n'){
			if(c!=' '){
				s[i]=c;
				i++;
			}
		}
		s[i]='\0';		
		L=ceil(strlen(s)/col);
		
		for(i=col;i<strlen(s);i+=2*col)
			std::reverse(s+i, s+i+col);
		
		for(i=0;i<col;i++){
			for(j=0;j<L;j++){
				printf("%c", s[(col*j)+i]);
			}
		}
		printf("\n");
	}
}

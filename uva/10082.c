/* UVA Online Judge
 * Problema: 10082 - WERTYU
 * Categoria: Taller de Programacion - Cadenas 
 * 
 * Israel Leiva - 27-11-2011
 */
#include <stdio.h>
/* WERTYU Problem - Programming Challenges - Capitulo 3 */

int main(){
	/* Se construye un alfabeto de acuerdo a la distribucion de teclado */
	char c, keyboard[48] = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
	int i;
	
	while( (c=getchar()) != EOF ){
		/* Se convierte todo excepto por los espacios y caracteres de
		 * nueva linea */
		if( c != ' ' && c != '\n' ){
			for(i = 0; i < 48; i++){
			/* Se muestra por pantalla el caracter anteriror al correspondiente
			 * en el alfalbeto */
				if(keyboard[i] == c){
					printf("%c", keyboard[i-1]);
					break;
				}
			}
		}else
			printf("%c", c);
	}
	return 0;
}

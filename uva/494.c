/* UVA Online Judge
 * Problema: 494 - Kindergarten counting name
 * Categoria: Taller de Programacion - Cadenas 
 * 
 * Israel Leiva - 27-11-2011
 */
#include <stdio.h>
#include <string>

/* Es vital llevar cuenta de las palabras leidas antes de algun simbolo
 * que no es letra. Por algun extranio motivo no me funciono con streams
 * en C++ */
int main(){
	char c;
	int words=0, letters=0;
	while( (c=getchar()) != EOF ){
		if(c=='\n'){
			if(letters>0)
				words++;
			printf("%d\n", words);
			letters=0;
			words=0;
		}else{
			if(ispunct(c) || isdigit(c) || c==' '){
				if(letters>0){
					letters=0;
					words++;
				}
			}else if(isalpha(c)){
				letters++;
			}
		}
	}
	return 0;
}

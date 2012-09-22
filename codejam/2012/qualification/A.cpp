/* Google Code Jam 2012 - Qualification Round
 * Problema: A - Speaking in Tongues
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 13-04-2012
 */
#include <cstdio>
int main(){
	int T, i=0;
	/* Se crea un mapeo de las letras del abecedario: a->y, b->h, etc. 
	 * Este se obtiene del analisis de los casos de prueba.
	 * */
	char c, mapping[27] = "yhesocvxduiglbkrztnwjpfmaq";
	
	scanf("%d\n", &T);
	while(T>0){
		i++;
		printf("Case #%d: ", i);
		/* Se reemplazan todos los caracteres excepto espacio */
		while((c=getchar())!='\n')
			(c==' ') ? printf(" ") : printf("%c", mapping[ c-'a' ]);
		printf("\n");
		T--;
	}
}

/* Facebook Hacker Cup 2012 - Qualification Round
 * Problema: Alphabet Soup
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 20-01-2012
 */
#include <cstdio>
#include <algorithm>
using namespace std;

/* Para saber cuantas veces se puede armar la palabra 'HACKERCUP' solo
 * es necesario contar en la cadena dada la cantidad de apariciones de 
 * las letras que componen la palabra. El minimo numero de apariciones de 
 * una de ellas es la maxima cantidad de veces que se puede armar dicha
 * palabra, ya que si le falta al menos una letra ya no se puede :)
 * 
 * OJO que la letra 'C' esta dos veces en la palabra 'HACKERCUP', asi 
 * que la cantidad de apariciones hay que dividirla por dos. */
int main(){
	/* le[] contendra las apariciones de letras segun su valor ASCII
	 * Tiene 91 elementos ya que el maximo valor ASCII que se leera sera
	 * 90 (Z mayuscula)
	 * 
	 * ph[] contendra las apariciones de las 8 letras que conforman la
	 * palabra 'HACKERCUP' */
	int T, i, le[91], ph[8], min, tc=0;
	char c;
	scanf("%d\n", &T);
	while(T>0){
		tc++;
		for(i=0;i<91;i++)
			/* valor minimo de apariciones por defecto */
			le[i]=0; 
			
		/* se cuenta cuantas veces aparece cada letra segun su codigo ASCII */
		while((c=getchar()) != '\n') le[c]++; 
		
		/* Se divide por dos la cantidad de Cs ya que aparece dos veces
		 * en la palabra 'HACKERCUP' */
		if(le[67]!=0) le[67]/=2; 
		
		/* Solo nos interesan las letras que componen la palabra 'HACKERCUP' */
		ph[0]=le[72]; /* H */
		ph[1]=le[65]; /* A */
		ph[2]=le[67]; /* C */
		ph[3]=le[75]; /* K */
		ph[4]=le[69]; /* E */
		ph[5]=le[82]; /* R */
		ph[6]=le[85]; /* U */
		ph[7]=le[80]; /* P */
		
		/* La minima cantidad de apariciones de una letra es la restriccion */
		min = *min_element(ph, ph+8);
		
		printf("Case #%d: %d\n", tc, min);
		
		T--;
	}
}

/* Caribbean Online Judge
 * Problema: 1506 - Exam Grader
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 06-12-2011
 */
#include <cstdio>

/* Solo hay que igualar las alternativas de cada alumno con las correctas.
 * OJO: se permiten notas negativas (!) */
int main(){
	int N, M, i;
	char correct[101], c;
	float grd;
	scanf("%d\n", &N);
	i=0;
	while((correct[i]=getchar()) != '\n') i++;
	scanf("%d\n", &M);
	while(M>0){
		i=0;
		grd=0.0;
		while((c=getchar()) != '\n'){
			if(c==correct[i]) grd+=1.0;
			else if(c!='#') grd-=0.25;
			i++;
		}
		printf("%.2f\n", grd);
		M--;
	}
}

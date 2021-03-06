/* Google Code Jam 2012 - Qualification Round
 * Problema: B - Dancing With the Googlers
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 14-04-2012
 */
#include <cstdio>

int main(){
	int T, N, S, p, j, googler, resto, resp, i=0, t[100];
	
	scanf("%d\n", &T);
	while(T>0){
		i++;
		printf("Case #%d: ", i);
		
		scanf("%d %d %d\n", &N, &S, &p);
		for(j=0;j<N;j++)
			scanf("%d", &t[j]);
			
		resp=0;
		for(j=0;j<N;j++){
			/* La manera mas equitativa de distribuir los puntos es dividir
			 * por tres (tripleta). El resto de la division puede ser 0,1,2 */
			googler=t[j]/3;
			resto=t[j]%3;
			/* Si el minimo valor de la tripleta es mayor que p, se suma
			 * inmediatamente (sin ocupar surprising) */
			if(googler>=p)
				resp++;
			/* Si resto es 1 o 2 y el minimo valor de tripleta esta a 1 de
			 * p, se suma sin ocupar surprising ya que el resto aporta 1
			 * a cualquiera de la tripleta y se alcanza p */
			else if(resto>0 && googler+1>=p)
				resp++;
			/* Si el minimo valor de la tripleta no alcanza p y se esta a
			 * una diferencia de p mayor a 1... */
			else{
				/* Se tiene un numero limitado de surprising */
				if(S>0){ 
					/* Si no hay resto lo unico que se puede hacer es sacar 1
					 * punto a un valor de la tripleta y sumarselo a otro, 
					 * quedando con una diferencia de 2 y ocupando un surprising.
					 * Esto no se puede hacer si el puntaje no alcanza a dividirse
					 * por tres (valor de tripleta cero!) */
					if(!resto){
						if(googler+1==p && googler>0){
							resp++;
							S--;
						}
					/* Si resto es 2 y sumandolo a uno de los valores de la
					 * tripleta se alcanza p, se ocupa un surprising */
					}else if(resto>1){
						if(googler+2>=p){
							resp++;
							S--;
						}
					}
				}
			}
		}
					
		printf("%d\n", resp);
		T--;
	}
}

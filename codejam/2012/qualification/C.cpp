/* Google Code Jam 2012 - Qualification Round
 * Problema: C - Recycled Numbers
 * Categoria: Brute force
 * 
 * Israel Leiva - 14-04-2012
 */
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

/* Funcion para convertir un entero en una cadena de a lo mas 7 digitos
 * Almacena de atras para adelante...asi, 11 seria "0000011" */
void num_to_str(int n, char str[8]){
	int i=6;
	while(n>0){
		str[i]='0'+(n%10);
		n=n/10;
		i--;
	}
	/* Si el numero tiene menos de 7 digitos se rellena lo que queda con
	 * ceros (de atras para adelante) */
	while(i>=0){
		str[i]='0';
		i--;
	}
	str[7]='\0';
}

/* Procesa el numero dado :) */
int process(int n, char A[8], char B[8]){
	int i, sz, corr, init, tmp_init, j, res=0;
	char tmp_str[8], recycled[8];
	vector<string> gen;
	bool found;
	
	/* El n recibido se transforma a cadena
	 * Asi es mas facil mover los digitos */
	num_to_str(n, tmp_str);
	
	/* Ya que si el numero tiene menos de 7 digitos se rellena el principio
	 * con ceros (e.g. "0000011"), se recorre la cadena hasta encontrar 
	 * un digito distinto de cero para calcular el largo del numero */
	for(i=0;i<7;i++){
		if(tmp_str[i]!='0'){
			sz=7-i;
			break;
		}
	}
	
	/* init es el inicio del numero en la cadena. Para "0000011" sera 5 */
	init=7-sz;
	
	/* El numero reciclado es del mismo largo que el original, asi que se
	 * rellena con ceros el principio en caso que tenga menos de 7 digitos */	
	for(i=0;i<init;i++)
		recycled[i]='0';
	
	/* Corr indica la cantidad de digitos que se toman desde el final y 
	 * se ponen al principio. Si el numero tiene n digitos, el maximo a tomar
	 * son n-1 (los n-1 ultimos) */
	for(corr=1;corr<sz;corr++){
		/* tmp_init da el inicio en el original de la cantidad de digitos a mover 
		 * (e.g. para "0000123", si se van a mover los 2 ultimos (corr=2), tmp_init es 6 */
		tmp_init=7-corr;
		j=0;
		/* Los primeros digitos del numero reciclado seran los que se mueven desde el
		 * original. Siguiendo el ej anterior, serian "23" */
		for(i=tmp_init;i<7;i++){
			recycled[init+j]=tmp_str[i]; 
			j++;
		}
		/* Los restantes digitos parten desde el inicio del original hasta justo antes
		 * de los que se movieron. En el ej visto seria "1" */
		for(i=init;i<tmp_init;i++){
			recycled[init+j]=tmp_str[i];
			j++;
		}
		/* Finalmente el reciclado seria "0000231" */
		recycled[7]='\0';
		
		/* Si el numero generado es mayor o igual que A, menor o igual que B y mayor estricto que el
		 * original, entonces sirve.. */
		if( (strcmp(A, recycled) <= 0) && (strcmp(recycled, B) <= 0) && (strcmp(tmp_str, recycled)) < 0 ){
			found=false;
			/* Hay que buscar si ya ha sido generado antes (e.g. 1212 genera dos veces el 2121 */
			for(i=0;i<res;i++){
				if(strcmp(gen[i].c_str(), recycled)==0){
					found=true;
					break;
				}
			}
			if(!found){
				/* Si el numero generado no es repetido, lo contamos y almacenamos en un vector
				 * de cadenas (para cuando se generen nuevos numeros ver que no se repitan) */
				gen.push_back(recycled);
				res++;
			}
		}
	}
	
	gen.clear();
	return res;
}

int main(){
	int T, i=0, j, A, B, res;
	char A_str[8], B_str[8];
	
	scanf("%d\n", &T);
	while(T>0){
		res=0;
		i++;
		printf("Case #%d: ", i);
		scanf("%d %d\n", &A, &B);
		
		/* Se convierten los numeros a cadenas para procesarlos */
		num_to_str(A, A_str);
		num_to_str(B, B_str);
		
		for(j=A;j<=B;j++)
			res+=process(j, A_str, B_str);

		printf("%d\n", res);
		T--;
	}
}

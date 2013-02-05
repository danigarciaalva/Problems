/* Caribbean Online Judge
 * Problema: 1157 - u Calculate e
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 03-12-2011
 */
#include <cstdio>

/* Los primeros casos se calculan aparte por el formato de salida
 * pedido (sin tantos digitos a la derecha). Para los demas se hace
 * la sumatoria con los factoriales previamente calculados.  */
int main(){
	char i, j;
	double f[10]={1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
	double e;
	printf("n e\n");
	printf("- -----------\n");
	for(i=0;i<=9;i++){
		e=0;
		printf("%d ", i);
		if(i==0)
			printf("1\n");
		else if(i==1)
			printf("2\n");
		else if(i==2)
			printf("2.5\n");
		else{
			for(j=0;j<=i;j++)
				e+=1.0/f[j];
			printf("%.9f\n", e);
		}
	}
}

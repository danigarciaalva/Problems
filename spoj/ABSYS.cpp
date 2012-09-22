/* Sphere Online Judge
 * Problema: ABSYS - Anti-Blot System
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 20-11-2011
 */
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>

/* Ya que solo un termino de la ecuacion se ve alterado, independiente de aquello
 * su valor se puede calcular con los dos restantes, por tanto hay que saber
 * detectar el valor alterado y proceder a resolver la ecuacion con los restantes
 * segun corresponda */
 
 /* Detecta si un arreglo de caracteres es un numero (contiene solo digitos) */
bool is_number(char n[20]){
	short i;
	for(i=0;i<strlen(n);i++)
		if(isalpha(n[i]))
			return false;
	return true;
}

/* Suma dos cadenas de digitos */
int sum(char n[20], char m[20]){
	short i, ln=strlen(n), lm=strlen(m);
	int A=0, B=0;
	for(i=ln-1;i>=0;i--)
		A+=(n[i]-'0')*pow(10, ln-i-1);
	for(i=lm-1;i>=0;i--)
		B+=(m[i]-'0')*pow(10, lm-i-1);
	return (A+B);
}

/* Resta dos cadenas de digitos */
int subtract(char n[20], char m[20]){
	short i, ln=strlen(n), lm=strlen(m);
	int A=0, B=0;
	for(i=ln-1;i>=0;i--)
		A+=(n[i]-'0')*pow(10, ln-i-1);
	for(i=lm-1;i>=0;i--)
		B+=(m[i]-'0')*pow(10, lm-i-1);
	return (A-B);
}

int main(){
	int N, res;
	short i;
	char c, x[20], y[20], z[20];
	scanf("%d\n\n", &N);
	while(N>0){
		i=0;
		/* Se leen los tres "numeros" */
		while((c=getchar()) != ' '){
			x[i]=c;
			i++;
		}
		x[i]='\0';
		getchar();
		getchar();
		i=0;
		while((c=getchar()) != ' '){
			y[i]=c;
			i++;
		}
		y[i]='\0';
		getchar();
		getchar();
		i=0;
		while((c=getchar()) != '\n'){
			z[i]=c;
			i++;
		}
		z[i]='\0';
		getchar();
		
		/* Dependiendo de la posicion del numero alterado se realizan
		 * las operaciones para averiguar su valor */
		if(!is_number(x)){
			res=subtract(z, y);
			printf("%d + %s = %s\n", res, y, z);
		}
		else if(!is_number(y)){
			res=subtract(z, x);
			printf("%s + %d = %s\n", x, res, z);
		}
		else{
			res=sum(x, y);
			printf("%s + %s = %d\n", x, y, res);
		}


		N--;
	}
}

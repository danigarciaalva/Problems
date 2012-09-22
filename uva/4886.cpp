/* ACM-ICPC Live Archive - Regionals 2010::North America::Rocky Mountain
 * Problema: 4886 - Page Count (problema E)
 * Categoria: Ad hoc
 *
 * Autor: Israel Leiva - 2011
 */
#include <cstdio>

/*  */
int main(){
	/* En car se leeran los caracteres '-', ',' y '\n' */
	char car;
	/* Cantidad de paginas, menor y mayor rango, cantidad de paginas impresas */
	int N, low, high, pages_printed;
	/* Dado que el numero maximo de paginas a imprimir es mil, en un arreglo booleano
	Se iran marcando los rangos evaluados para saber las paginas impresas */
	bool pages[1000];

	/* Bucle principal */
	while(1){
		scanf("%d", &N);

		/* Termino de casos de prueba */
		if(N == 0)
			break;

		/* Inicialmente no se han impreso paginas, por tanto todo el arreglo es false */
		for(int i=0;i<1000;i++)
			pages[i] = false;

		pages_printed = 0;
		car = ' ';

		/* Bucle para leer una linea */
		while(1){
			/* Leyendo el primer numero y caracter sabemos si el rango abarca mas de una pagina */
			scanf("%d%c", &low, &car);

			/* En caso de que car sea '-' el rango es de mas de una pagina (aunque low y high sean iguales) */
			if(car == '-')
				scanf("%d%c", &high, &car);
			else
				/* Si no hay rango low y high se consideran iguales */
				high = low;

			/* Se ignoran los casos en que low sea mayor que high */
			if(low <= high){
				/* El rango no puede exceder a N, la cantidad de paginas */
				if(high > N)
					high = N;

				/* Se evalua si las paginas del rango procesado han sido impresas o no */
				for(int i = low-1; i < high; i++ ){
					if(pages[i] == false){
						pages[i] = true;
						pages_printed++;
					}
				}
			}

			/* Fin de linea */
			if(car == '\n')
				break;
		}
		printf("%d\n", pages_printed);
	}
}

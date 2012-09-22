/* Sphere Online Judge
 * Problema: CANTON - Count on Cantor
 * Categoria: Teoria de Numeros
 * 
 * Israel Leiva - 04-12-2011
 */
#include <iostream>
#include <vector>
using namespace std;

/* Realizando una tabla con los valores de N se puede apreciar que cada
 * ciertos intervalos el valor del numerador asciende mientras el del 
 * denominador desciende y viceversa. Dichos valores van de 1 a 1, 1 a 2,
 * 1 a 3, 1 a 4, etc. Los primeros valores de dichos intervalos son:
 * 1, 2, 4, 7, 11, 16, 22, etc. Los cuales vienen dados por 1,1+1,2+2,
 * 4+3,7+4,11+5,16+5, etc. 
 * 
 * A continuacion la tabla con los comienzos maracados con <
 * 
 * n | v
 * ------
 * 1 | 1/1 <
 * 2 | 1/2 <
 * 3 | 2/1
 * 4 | 3/1 <
 * 5 | 2/2
 * 6 | 1/3
 * 7 | 1/4 <
 * 8 | 2/3
 * 9 | 3/2
 * 10| 4/1
 * 
 * Para obtener el valor del n-esimo termino calculamos primero los comienzos
 * desde 1 hasta N<=10000000 (caso limite). El indice de cada N en el arreglo
 * indica el largo de la secuencia (e.g. para 7 es 4, lo que quiere decir
 * que los sig numeros van del 1 al 4 y del 4 al 1.). Es necesario diferenciar
 * entre valores de N par e impar para saber si el numerador asciendo o desciende.
 * 
 * Finalmente para el n-esimo termino se encuentra el comienzo menor o igual
 * a dicho termino y segun la diferencia entre N y dicho comienzo se calcula
 * el valor de la secuencia que le corresponde dado por el indice del vector.
 * */
int main(){
	int i, T, N, j, x;
	vector<unsigned long > v;

	i=0;
	N=1;
	while(N<=10000000){
		N+=i;
		v.push_back(N);
		i++;
	}
	
	cin >> T;
	while(T>0){
		cin >> N;
		N;
		for(i=0;i<v.size();i++){
			if(v[i]>N){
				x=v[i-1];
				j=i;
				break;
			}
		}
		if(j%2==0){
			cout << "TERM " << N << " IS " << N-x+1 << "/" << j-(N-x) << endl;
		}else{
			cout << "TERM " << N << " IS " << j-(N-x) << "/" << N-x+1 << endl;
		}
		T--;
	}
}

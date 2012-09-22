/* Sphere Online Judge
 * Problema: GUANGGUN - 111...1 Squared
 * Categoria: Formula
 * 
 * Israel Leiva - 01-12-2011
 */
#include <iostream>
using namespace std;

/* Analizando los casos de prueba se llega a que la funcion S(n) es el
 * cuadrado de los numeros desde 1 hasta 9. Para mayores a 9 es necesario
 * aplicar %9 y sumar a las anteriores N/9*81 (valor de S(n) hasta 9 */
int main(){
	unsigned long long N, sum;
	while(cin >> N){
		if(N<=9)
			cout << N*N << endl;
		else{
			sum = 81*(N/9) + (N%9)*(N%9);
			cout << sum << endl;
		}
	}
}

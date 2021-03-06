/* Caribbean Online Judge
 * Problema: 1627 - Counting Zeros
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 27-11-2011
 */
#include <iostream>
#include <cmath>
using namespace std;

/* Probando hasta factorial se puede observar que la cantidad de ceros
 * aumenta en cada valor de 5*10^i con i=0,1,2...,11 . Ya que con esto los
 * valores que se obtienen son muy parecidos pero no iguales, se observa
 * que aumentan en proporcion de 2, 4, 8, ..., 2^11 . Habia que estudiar
 * los casos de prueba :) */
int main(){
	int T, N, i;
	unsigned long long current, zeros;
	cin >> T;
	while(T>0){
		zeros=0;
		cin >> N;
		for(i=0;i<=14;i++){
			current = (N/(5*pow(10,i))*pow(2,i));
			if(current<1)
				break;
			zeros+=current;
		}
		cout << zeros << endl;
		T--;
	}
}

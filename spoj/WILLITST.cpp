/* Sphere Online Judge
 * Problema: WILLITST - Will it ever stop
 * Categoria: Formula
 * 
 * Israel Leiva - 07-12-2011
 */
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

/* Analizando y probando el algoritmo dado en el enunciado se puede conjeturar
 * que se detendra solo con las potencias de dos. Por tanto se calculan todas
 * las potencias de dos que sean menores al caso limite. */
int main(){
	unsigned long long N, lim;
	vector<unsigned long long> v;
	lim=pow(10,14);
	N=1;
	while(N<=lim){
		N=N*2;
		v.push_back(N);
	}
	
	cin >> N;
	(binary_search(v.begin(), v.end(), N)) ? cout << "TAK" : cout << "NIE";
	cout << endl;
	
	v.clear();
}

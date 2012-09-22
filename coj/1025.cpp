/* Caribbean Online Judge
 * Problema: 1025 - Democracy in danger
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
#include <algorithm>
using namespace std;

/* Para averiguar la minima cantidad de personas solo basta ordener los
 * grupos de personas de menor a mayor segun su tamaño y luego considerar
 * la mitad+1 de personas de la mitad+1 de grupos. */
int main(){
	int K, i, voters=0, groups[101];
	
	cin >> K;
	
	for(i=0;i<K;i++)
		cin >> groups[i];
		
	sort(groups, groups+K);
	
	for(i=0;i<(K/2)+1;i++)
		voters += (groups[i]/2)+1;
		
	cout << voters << endl;
}

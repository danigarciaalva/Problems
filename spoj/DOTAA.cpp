/* Sphere Online Judge
 * Problema: DOTAA - DOTA HEROES
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 10-01-2012
 */
#include <iostream>
#include <algorithm>
using namespace std;

/* Se almacenan los heroes con su cantidad de vida y cada vez que los heroes
 * se topan con una torre se obtiene el de mayor vida de dicha lista para
 * que le llegue a el el daño. De esta manera se sabe si no se puede continuar
 * cuando el de mayor vida no tiene la suficiente para resistir el daño
 * de la torre, por lo que muere (y la idea es que lleguen todos vivos).
 *  */
int main(){
	/* Testcases, heroes, towers, damage */
	int T, h, t, d, i, *max, list[500];
	cin >> T;
	while(T>0){
		cin >> h >> t >> d;
		/* Se leen los heroes */
		for(i=0;i<h;i++)
			cin >> list[i];
		
		/* Se enfrenta siempre el heroe con mas vida a la sig torre */
		while(t>0){
			max = max_element(list, list+h);
			if(d>=*max)
				break;
			*max = *max-d;
			t--;
		}
		
		/* Si se logra pasar todas las torres t = 0 */
		(t==0) ? cout << "YES" : cout << "NO";
		cout << endl;
		T--;
	}
}

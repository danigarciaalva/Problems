/* UVA Online Judge
 * Problema: 10050 - Hartals
 * Categoria: Taller de Programacion - Ad hoc
 * 
 * Israel Leiva - 08-12-2011
 */
#include <iostream>
#include <set>
using namespace std;

/* En resumidas cuentas se descuentan los hartals que no son ni sabado
 * ni domingo. Para ello se hace uso de mod 7 (por los 7 dias de la 
 * semana) y se va aumentando hasta el numero N de dias. Ya que interesean 
 * los dias inhabilitados sin importar cuantos hartales haya en ese dia, 
 * se usa un conjunto para evitar repeticiones. */
int main(){
	set<int> hartals;
	int hp[100];
	int T, P, N, i, j;
	cin >> T;
	while(T>0){
		hartals.clear();
		cin >> N >> P;
		for(i=0;i<P;i++)
			cin >> hp[i];
		
		for(i=0;i<P;i++){
			for(j=hp[i];j<=N;j+=hp[i]){
				if(j%7 != 6 && j%7 != 0)
					hartals.insert(j);
			}
		}
		
		cout << hartals.size() << endl;
		T--;
	}
}

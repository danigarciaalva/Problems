/* Caribbean Online Judge
 * Problema: 1004 - Traversing Grid
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 17-11-2011
 */
#include <iostream>
using namespace std;

/* Realizando algunos casos de prueba es facil darse cuenta que las respuestas
 * siguen un patron segun si el tamaño de columnas y filas es igual. par, 
 * impar, etc.  */
int main(){
	unsigned long long T, R, C;
	cin >> T;
	while(T>0){
		cin >> R >> C;
		if(R==C && R > 1){
			if(R%2==0)
				cout << "L" << endl;
			else
				cout << "R" << endl;
		}else if(R>C && C>1){
			if(C%2==0)
				cout << "U" << endl;
			else
				cout << "D" << endl;
		}else if(C>R){
			if(R%2==0)
				cout << "L" << endl;
			else
				cout << "R" << endl;
		}else if(C==1){
			if(R==1)
				cout << "R" << endl;
			else
				cout << "D" << endl;
		}
		
		T--;
	}
}

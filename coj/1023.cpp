/* Caribbean Online Judge
 * Problema: 1023 - Financial Managment
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 10-11-2011
 */
#include <iostream>
using namespace std;

/* Leer datos y calcular promedio */
int main(){
	float year_balance = 0.0, month_balance = 0.0;
	for(int i=0;i<12;i++){
		cin >> month_balance;
		year_balance += month_balance;
	}
		
	year_balance /= 12.0;
	cout << "$" << year_balance << endl;
}

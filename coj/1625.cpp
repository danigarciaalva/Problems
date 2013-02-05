/* Caribbean Online Judge
 * Problema: 1625 - Day of the Week
 * Categoria: Formula
 * 
 * Israel Leiva - 05-12-2011
 */
#include <iostream>
using namespace std;

/* 
 * a = (14-month)/12 - month = # del mes (1 Enero, 2 Febrero, etc) 
 * y = year-a (year = anio de 4 digitos)
 * m = month + 12a - 2
 * 
 * d =  (day + y + y/4 - y/100 + y/400 + (31m)/12) mod 7
 * 
 * La respuesta da un numero del 0 al 6:
 * 
 * 0 - Domingo
 * 1 - Lunes
 * .
 * .
 * 6 - Sabado
 * 
 * */

int main(){
	int a, m, d, y, day, year, month_num, T;
	string month;
	string months[12]={"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
	string days[7] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};

	cin >> T;
	while(T>0){
		cin >> year >> month >> day;
		for(month_num=0;month_num<12;month_num++)
			if(month == months[month_num])
				break;
		month_num++;
		
		a = (14-month_num)/12;
		y = year-a;
		m = month_num+(12*a)-2;
		d = (day+y+y/4-y/100+y/400+(31*m)/12)%7;
		
		cout << days[d] << endl;
		T--;
	}
}

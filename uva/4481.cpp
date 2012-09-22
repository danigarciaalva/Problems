/* ACM-ICPC Live Archive - Regionals 2009::Latin America
 * Problema: 4481 - Jingle Composition
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 16-11-2011
 */
#include <iostream>
#include <string>
using namespace std;

/* Leer cada linea y sumar los valores entre // de acuerdo a los valores
 * especificados en el problema */
int main(){
	string line;
	int i, j, right_measures;
	float sum;
	while(cin >> line){
		if(line == "*") break;
		i=1;
		right_measures=0;
		while(i<line.length()){
			sum=0.0;
			for(j=i;;j++){
				if(line[j] == '/')
					break;
				else{
					if(line[j] == 'W')
						sum+=1.0;
					else if(line[j] == 'H')
						sum+=(float)1/2;
					else if(line[j] == 'Q')
						sum+=(float)1/4;
					else if(line[j] == 'E')
						sum+=(float)1/8;
					else if(line[j] == 'S')
						sum+=(float)1/16;
					else if(line[j] == 'T')
						sum+=(float)1/32;
					else if(line[j] == 'X')
						sum+=(float)1/64;
				}
			}
			if(sum==1.0)
				right_measures++;
			i=j+1;
		}
		cout << right_measures << endl;
	}
}

/* Caribbean Online Judge
 * Problema: 1244 - Flowers Flourish from France
 * Categoria: Cadenas
 * 
 * Israel Leiva - 16-11-2011
 */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/* Lo escencial es saber usar stringstream para leer la linea como un
 * flujo :) */
int main(){
	istringstream line_stream;
	string line, word, prev_word;
	bool is;
	while(getline(cin, line)){
		if(line == "*") break;
		
		line_stream.str(line);
		
		is=true;
		line_stream >> prev_word;
		while(line_stream >> word){
			if(toupper(prev_word[0]) != toupper(word[0])){
				is=false;
				break;
			}
		}
		
		if(is)
			cout << "Y";
		else
			cout << "N";
		cout << endl;
		line_stream.clear();
	}
}

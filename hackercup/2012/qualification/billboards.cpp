/* Facebook Hacker Cup 2012 - Qualification Round
 * Problema: Billboards
 * Categoria: Ad hoc
 * Israel Leiva - 23-01-2012
 */
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

/* Para saber el maximo tamanio de font que se puede alcanzar se parte del
 * height dado, luego se van agregando las palabras. En caso que sobrepase
 * el width maximo, se cambia de fila. Si al hacer esto se sobrepasa el
 * height maximo, se realiza todo el proceso otra vez pero disminuyendo
 * el tamanio. Si se completa el proceso de agregar todas las palabras
 * entonces el tamanio usado es el maximo. Ademas, el tamanio no puede 
 * disminuir de cero. */
int main(){
	int T, i, j, W, H, width, height, size;
	istringstream line_stream;
	string line, word;
	vector<string> words;
	
	cin >> T;
	getline(cin, line);
	for(i=1;i<=T;i++){
		/* Se lee el texto con stream */
		getline(cin, line);
		line_stream.str(line);
		line_stream >> W >> H;
				
		while(line_stream >> word) 
			words.push_back(word);
		
		/* tamanio inicial es igual al maximo height */
		size=H;
		while(1){	
			/* height es equivalente al numero de filas que se usan */
			height=1;
			/* width lleva el ancho usado actualmente.
			 * Empieza en -size ya que cada vez que se agrega una palabra se suma
			 * ademas un espacio de tamanio size, y como la primera palabra
			 * no necesita un espacio que la anteceda, se inicializa el
			 * width en -size */
			width=-size;
			
			if(size==0) break;
			
			for(j=0;j<words.size();j++){
				/* En caso que la palabra actual por si sola sea mayor
				 * que el width maximo, entonces se termina inmendiatamente
				 * el ciclo ya que nunca sera posible que quepa con el 
				 * tamanio actual */
				if(words[j].length()*size>W) break;
				
				/* Si alcanza una palbra y un espacio mas, se agregan */
				if(width+((1+words[j].length())*size)<=W){
					/* se suma el tamanio de la palabra */
					width+=words[j].length()*size;
					/* se agrega un espacio */
					width+=size;
				}else{
					/* De lo contrario se agrega una fila con la ultima 
					 * palabra que no cupio */
					width=words[j].length()*size;
					height++;
				}
				/* Si el tamanio actual por el numero de filas supera el
				 * maximo height, se termina el ciclo para empezar con
				 * un tamanio menor */
				if(height*size>H) break;
				if(width>W) break;
			}
			
			/* Si j == words.size entonces se agregaron todas las palabras
			 * y se obtuvo el tamanio maximo */
			if(j==words.size()) break;
			/* Si no entonces se disminuye el tamanio y se empieza otra vez */
			size--;
		}
			
		/* Solucion :) */
		cout << "Case #" << i << ": " << size << endl;
		line_stream.clear();
		words.clear();
	}
}

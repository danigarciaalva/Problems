/* UVA Online Judge
 * Problema: 401 - Palindromes
 * Categoria: Taller de Programacion - Cadenas 
 * 
 * Israel Leiva - 28-11-2011
 */
#include <iostream>
#include <string>
using namespace std;

/* Ojo que si en una palabra una letra no tiene su equivalente espejo entonces
 * se descarta de inmendiato que sea una mirror string. Para esta ultima es
 * necesario revisar todas sus letras (de atras hacia adelante). Para comprobar
 * si una palabra es palindromo es necesario recorrer solo la mitad de ella e
 * ir comparandola respectivamente con la otra mitad. */
char normal[35] = {'A', ' ', ' ', ' ', 'E', ' ', ' ', 'H', 'I', 'J', ' ', 'L', 'M', ' ', 'O', ' ', ' ', ' ', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', ' ', '5', ' ', ' ', '8', ' '};
char reverse[35] = {'A', ' ', ' ', ' ', '3', ' ', ' ', 'H', 'I', 'L', ' ', 'J', 'M', ' ', 'O', ' ', ' ', ' ', '2', 'T', 'U', 'V', 'W', 'X', 'Y', '5', '1', 'S', 'E', ' ', 'Z', ' ', ' ', '8', ' '};

bool is_palindrome(string s, short L){
	int i;
	for(i=0;i<=L/2;i++)
		if(s[i]!=s[L-1-i])
			return false;
	
	return true;
}

short get_reverse(char c){
	int i;
	for(i=0;i<35;i++){
		if(normal[i]==c)
			return i;
	}
	return -1;
}

bool is_mirror(string s, short L){
	int i, r;
	for(i=0;i<L;i++){
		r=get_reverse(s[i]);
		if(r!=-1){
			if(reverse[r]!=s[L-1-i])
				return false;
		}else{
				return false;
		}
	}
	return true;
}

int main(){
	string s;
	bool palindrome=false, mirror=false;
	while( cin >> s ){
		palindrome=is_palindrome(s, s.length());
		mirror=is_mirror(s, s.length());
		if(palindrome && mirror)
			cout << s << " -- is a mirrored palindrome." << endl;
		else if(palindrome)
			cout << s << " -- is a regular palindrome." << endl;
		else if(mirror)
			cout << s << " -- is a mirrored string." << endl;
		else
			cout << s << " -- is not a palindrome." << endl;
		cout << endl;
	}
}

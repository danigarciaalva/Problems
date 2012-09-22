/* Sphere Online Judge
 * Problema: FACEFRND - Friends of Friends
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 06-12-2011
 */
#include <iostream>
#include <set>
using namespace std;

/* Se guardan los amigos en un set y los supuestos "amigos de amigos" en otro.
 * Luego se recorre el set de amigos y si un amigo esta en el set de "amigos
 * de amigos", se elimina. Usar set permite hacer las busquedas en logN */
int main(){
	set<int> f, ff;
	set<int>::iterator it;
	int N, M, id;
	cin >> N;
	while(N>0){
		cin >> id >> M;
		f.insert(id);
		while(M>0){
			cin >> id;
			ff.insert(id);
			M--;
		}
		N--;
	}
	for(it=f.begin();it!=f.end();it++)
		if( ff.find(*it) != ff.end() )
			ff.erase(*it);
			
	cout << ff.size() << endl;
		
	ff.clear();
	f.clear();
}

/* Caribbean Online Judge
 * Problema: 1630 - He's offside!
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 26-11-2011
 */
#include <iostream>
#include <vector>
#include <algorithm>

/* Solo es necesario ordenar las distancias de atacantes y defensores segun
 * posicion en la cancha y ver si el atacante esta mas cerca del arco contrario
 * que el segundo jugador oponente. */
using namespace std;
int main(){
int i,A,D,As[11],Ds[11];
while(cin>>A>>D){
	if(!A && !D)break;
		for(i=0;i<A;i++)cin>>As[i];
		for(i=0;i<D;i++)cin>>Ds[i];
		sort(As,As+A);
		sort(Ds,Ds+D);
		(As[0]<Ds[1])?cout<<"Y":cout<<"N";
		cout<<endl;
	}
}

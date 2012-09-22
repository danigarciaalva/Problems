/* Sphere Online Judge
 * Problema: PROSCORE - Problem Set Score
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 05-12-2011
 */
#include <iostream>
using namespace std;

/* Procesar la entrada para ver si se cumplen las reglas dadas en el 
 * enunciado, nada mas. */
int main(){
	int T, i, Ps[10];
	short v, j, k, N, P, score, solved, any;
	bool min, max, all;
	
	cin >> T;
	for(i=1;i<=T;i++){
		min=max=all=true;
		
		for(j=0;j<10;j++)
			Ps[j]=0;
			
		cin >> N >> P;
		
		for(j=0;j<N;j++){
			solved=0;
			for(k=0;k<P;k++){
				cin >> v;
				if(v==1){
					Ps[k]++;
					solved++;
				}
			}
			if(solved==0)
				min=false;
			if(solved==P)
				max=false;
		}
		
		any=0;
		for(j=0;j<P;j++)
			if(Ps[j]>0)
				any++;
		
		if(any<P)
			all=false;
		
		if(all && min && max)
			score=7;
		else if(all && !min && !max)
			score=4;
		else if(!all && !min && max)
			score=1;
		else if(!all && min && !max)
			score=2;
		else if(all && min && !max)
			score=6;
		else if(all && !min && max)
			score=5;
		else if(!all && min && max)
			score=3;
		else
			score=0;
		
		cout << "Case " << i << ": " << score << endl; 
	}
}

/* Caribbean Online Judge
 * Problema: 1345 - Brownie Points I
 * Categoria: Geometría
 * 
 * Israel Leiva - 14-11-2011
 */
#include <iostream>
using namespace std;

typedef struct {
	long long x, y;
} point;

/* Simple geometria */
int main(){
	int N, i, stan, ollie;
	point center, bp[200000];
	while(cin >> N){
		if(!N) break;
		
		for(i=0;i<N;i++)
			cin >> bp[i].x >> bp[i].y;
			
		center=bp[N/2];
		stan=0;
		ollie=0;
		
		for(i=0;i<N;i++){
			if(bp[i].x != center.x && bp[i].y != center.y){
				if(bp[i].x > center.x){
					if(bp[i].y > center.y)
						stan++;
					else
						ollie++;
				}else{
					if(bp[i].y < center.y)
						stan++;
					else
						ollie++;
				}
			}
		}
		cout << stan << " " << ollie << endl;
	}
}

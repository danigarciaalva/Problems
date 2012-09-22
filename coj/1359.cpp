/* Caribbean Online Judge
 * Problema: 1359 - Contest Postmortem
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 14-11-2011
 */
#include <iostream>
#include <string>
using namespace std;

/* Simple simulacion, solo seguir las reglas */
int main(){
	int C, P, i, j, problems_solved, two_problems, all_problems, score, problems[21], contest=0;
	short r;
	bool all_solved;
	string team;
	while(cin >> C >> P){
		if(!C && !P) break;
		
		contest++;
		two_problems=0;
		all_problems=0;
		score=0;
		all_solved=true;
		
		for(i=0;i<P;i++)
			problems[i]=0;
		
		for(i=0;i<C;i++){
			cin >> team;
			problems_solved=0;
			for(j=0;j<P;j++){
				cin >> r;
				if(r==1){
					problems_solved++;
					problems[j]++;
				}
			}
			if(problems_solved >= 2)
				two_problems++;
			if(problems_solved == P)
				all_problems++;
		}
		
		if((two_problems*100)/C > 90)
			score += 2;
		if(all_problems == 0)
			score += 2;
			
		for(i=0;i<P;i++){
			if(problems[i]==0){
				all_solved=false;
				break;
			}
		}
		
		if(all_solved)
			score++;
			
		cout << "Contest " << contest << ": " << score << endl;
	}
}

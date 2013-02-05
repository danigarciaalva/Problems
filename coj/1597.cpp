/* Caribbean Online Judge
 * Problema: 1597 - Average
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 18-11-2011
 */
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

/* Se ordenan y suman solo los que estan entre los limites */
int main(){
	int i, H, L, N, num;
	vector<int> evals;
	float avrg;
	while(cin >> H >> L >> N){
		if(!H && !L && !N) break;
		
		avrg=0;
		evals.clear();
		
		for(i=0;i<N;i++){
			cin >> num;
			evals.push_back(num);
		}
		
		sort(evals.begin(), evals.end());
		
		for(i=0;i<N;i++)
			if(i>=L && i<N-H)
				avrg+=evals[i];
		
		avrg /= (N-H)-L;
		printf("%.6f\n", avrg);
	}
}

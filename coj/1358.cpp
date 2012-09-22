/* Caribbean Online Judge
 * Problema: 1358 - Evan Money Lesson
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 13-11-2011
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef struct {
	string name;
	int money;
} st;

bool s(const st& s1, const st& s2){
	if(s1.money > s2.money)
		return true;
	return false;
}

/* Ordenar de mayor a menor */
int main(){
	int N, i, x, y, z;
	st students[100];
	while(cin >> N){
		if(N == -1) break;
		for(i=0;i<N;i++){
			cin >> students[i].name >> x >> y >> z;
			students[i].money = x*5 + y*10 + z*20;
		}
		sort(students, students + N, &s);
		if(students[0].money == students[N-1].money)
			cout << "All have the same amount." << endl;
		else
			cout << students[0].name << " has most, " << students[N-1].name << " has least money." << endl;
		
	}
}

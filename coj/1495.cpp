/* Caribbean Online Judge
 * Problema: 1495 - Increasing Order List
 * Categoria: Ad hoc
 * 
 * Israel Leiva - 13-11-2011
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Se lee la lista de numeros y se ordena */
int main(){
	int N, i, num;
	vector<int> nums;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> num;
		nums.push_back(num);
	}
	sort(nums.begin(), nums.end());
	for(i=0;i<N;i++)
		cout << nums[i] << endl;
}

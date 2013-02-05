/* Facebook Hacker Cup 2012 - First Round
 * Problema: Recover the Sequence
 * Categoria: Divide and Conquer
 * Israel Leiva - 28-01-2012
 */
#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

/* Se aplica el algoritmo descrito en el enunciado para reconstruir el
 * orden de la secuencia segun la cadena de 1sy2s. El algoritmo es similar
 * a un mergesort, pero al momento de hacer el 'merge' se debe meter un
 * elemento o el otro segun la cadena dijiese 1 o 2.
 * 
 * Luego habia que mapear dicha cadena segun los valores y su posicion
 * en la secuencia de 1..N, ya que el algoritmo los daba ordenados.
 * 
 * Para el checksum solo habia que seguir los pasos descritos en el 
 * enunciado. */

string seq;
int orig[10001], c;

void init(){
	for(int i=0;i<10000;i++)
		orig[i]=i;
}

/* mezcla. ojo que para saber de cual de las dos mitades sacar un elemento 
 * hay que ver la secuencia de 1s y 2s */
queue<int> merge(queue<int> left, queue<int> right){
	queue<int> partial;
	
	while( !(left.empty()) && !(right.empty()) ){
		if(seq[c]-'0' == 1){
			partial.push(left.front());
			left.pop();
			c++;
		} else {
			partial.push(right.front());
			right.pop();
			c++;
		}
	}
	
	while(!(left.empty())){
		partial.push(left.front());
		left.pop();
	}
	
	while(!(right.empty())){
		partial.push(right.front());
		right.pop();
	}
		
	return partial;
}

/* divide y venceras */
queue<int> dc(int bgn, int end){
	int sz = (end-bgn)+1, mid;
	queue<int> left, right, partial;
	
	if(sz <= 1) {
		partial.push(orig[bgn]);
		return partial;
	}
	
	mid = (bgn+floor(sz/2));
	
	left = dc(bgn, mid-1);
	right = dc(mid, end);

	partial =  merge(left, right);		
	 
	return partial;
}

/* se mapea la respuesta del algoritmo merge con la secuencia 1..N */
vector<int> order(queue<int> partial, int N){
	vector<int> sol(N);
	int i, v;
	for(i=1;i<=N;i++){
		v = partial.front();
		sol[v] = i;
		partial.pop();
	}
	return sol;
}

/* hacer modulo por numero primo alto puede generar pseudo-aleatoreidad,
 * sin embargo es lo que se pedia */
unsigned long long int getchk(vector<int> sol){
	unsigned long long r=1;
	int i;
	for(i=0;i<sol.size();i++){
		r = (31*r)%1000003;
		r = (r+sol[i])%1000003;
	}
	return r;
}

int main(){
	int T, i, j, N;
	vector<int> sol;
	cin >> T;
	for(i=1;i<=T;i++){
		cin >> N >> seq;
		init();
		c=0;
		/* se restaura y ordena la cadena */
		sol = order(dc(0, N-1), N);
		/* se muestra por pantalla el resultado del checksum */
		cout << "Case #" << i << ": " << getchk(sol) << endl;
	}
}

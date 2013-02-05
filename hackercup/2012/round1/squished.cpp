/* Facebook Hacker Cup 2012 - First Round
 * Problema: Squished Status
 * Categoria: Backtracking 
 * 
 * Israel Leiva - 28-01-2012
 */
#include <iostream>
#include <vector>
using namespace std;

/* Se prueban las combinaciones posibles mediante backtracking y se almacena
 * los valores obtenidos para evitar repetir los calculos
 * 
 * Dado que el mayor numero podia ser 255, solo habia que verificar tres
 * digitos a la vez. El algoritmo de backtracking revisa si los tres digitos
 * desde la posicion actual son validos y por cada uno de ellos busca mas
 * soluciones.
 * 
 * Segun las restricciones si un cero es primer digito se retorna cero
 * inmediatamente ya que no es valido.
 * 
 * Se guardan los valores en dp[] ya que es probable que se prueben multiples
 * veces las mismas subcadenas en busca de cuantas soluciones validas tiene
 *  */

long long dp[1000]; 
string st;

/* backtracking :-) */
unsigned long long bt(int bg, int M){
	int st_len = st.length();
	unsigned long long sols=0;
	if(bg >= st_len)
		return 1;
	else if(st[bg]-'0' == 0)
		return 0;
	else if(dp[bg]!=-1)
		return dp[bg];
	else{
		/* se ve si el sig digito es valido, de serlo, se buscan soluciones por ahi */
		if(st[bg]-'0' <= M){
			sols = (sols+bt(bg+1, M))%0xfaceb00c;
			/* se ve si la suma de los dos sig ditigos es valida, de serla, se buscan soluciones por ahi */
			if( (bg <= st_len-2) && ((st[bg]-'0')*10 + st[bg+1]-'0' <= M) ){
				sols = (sols+bt(bg+2, M))%0xfaceb00c;
				/* se ve si la suma de los tres sig digitos es valida, de serla, se buscan soluciones por ahi */
				if( (bg <= st_len-3) && ((st[bg]-'0')*100 + (st[bg+1]-'0')*10 + st[bg+2]-'0' <= M) ){
					sols = (sols+bt(bg+3, M))%0xfaceb00c;
				}
			}
		}
	}
	/* para evitar repeticion de calculos */
	dp[bg]=sols;
	return sols;
}

int main(){
	int N, i, M, j;
	unsigned long long S;
	cin >> N;
	for(i=1;i<=N;i++){
		cin >> M >> st;
		for(j=0;j<1000;j++) dp[j]=-1;
		S = bt(0, M);
		S = S%0xfaceb00c;
		cout << "Case #" << i << ": " << S << endl;
	}
}

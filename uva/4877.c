/** ACM-ICPC Regionals 2010  :: North America :: Greater NY
 * Problema E - Non-decreasing digits
 */
#include <stdio.h>
/* Max 75 ya que el mayor N es 64, 64+9 = 74*/
#define MAXN 75

/* Coef. binomial */
unsigned long long binomial(unsigned long n, unsigned long m) {
	long long bc[MAXN][MAXN];
	int i, j;
	
	/* Establece casos bases de n sobre 1 y n sobre 0 */
	for(i=0; i<=n; i++)
		bc[i][0] = 1;

	for(j=0; j<=n; j++)
		bc[j][j] = 1;

	/* Calcula recursivamente para obtener n sobre k */
	for(i=1; i<=n; i++)
		for(j=1; j<i; j++)
			bc[i][j] = bc[i-1][j-1] + bc[i-1][j];

	return bc[n][m];
}

int main(){
	int N, n, k, i, tc;
	long long bc;

	scanf("%d\n", &N);
	/* El patrón de los casos de prueba se encuentra repetido en el triángulo de Pascal
	 * y representa la (9+k)-ésima fila, k-ésimo elemento, con k siendo la cantidad de dígitos */
	for(i=0; i<N; i++){
		scanf("%d %d\n", &tc, &k);

		printf("%d %llu\n", tc, binomial(9+k, k));
	}
	return 0;
}

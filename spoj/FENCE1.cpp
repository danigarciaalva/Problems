/* Sphere Online Judge
 * Problema: FENCE1 - Build a Fence
 * Categoria: Geometria
 * 
 * Israel Leiva - 07-12-2011
 */
#include <cstdio>
#include <cmath>

/* El area maxima viene dada por un semicirculo y se despeja en funcion
 * del perimetro (conocido).
 * 
 * Amax = ((L^2)/PI)/2 - Donde L es el perimetro del semicirculo */
int main(){
	float N;
	while(true){
		scanf("%f", &N);
		if(!N) break;
		printf("%.2f\n", ((N*N)/(2.0*acos(0)))/2.0);
	}
}

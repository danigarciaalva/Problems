/* UVA Online Judge
 * Problema: 10258 - Contest Scoreboard
 * Categoria: Taller de Programacion - Ordenamiento
 * 
 * Israel Leiva - 11-12-2011
 */
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

/* Las complicaciones estan en la lectura de datos y posterior ordenamiento.
 * Con la estructura de pair de la STL se facilita bastante. Estos se
 * ordenan en primera instancia en base al elemento first y luego en base
 * al second. */

int main(){
	/* score tendra el numero de problemas resueltos
	 * pen tendra el tiempo acumulado de penalizacion
	 * subs tendra las submissions totales hechas
	 * solved sirve para saber si un problema ya fue resuelto y asi no
	 * generar inconsistencia con las penalizaciones.
	 * 
	 * Se lee la entrada por lineas y luego se separa usando sstream.
	 * 
	 *  */
	int T, con, problem, time, score[101], tries[100][10], pen[101], subs[101], i, j, c;
	bool solved[101][10];
	char s[256], L;
	istringstream iss;
	pair< int, pair<int, int> > aux;
	vector< pair< int, pair<int, int> > > scoreboard;
	
	scanf("%d\n", &T);
	scanf("\n");
	c=0;
	
	/* se incializa los arrelgos */
	for(i=1;i<=100;i++){
		score[i]=0;
		pen[i]=0;
		subs[i]=0;
		for(j=1;j<=9;j++){
			tries[100][10]=0;
			solved[i][j]=false;
		}
	}
	while(T>0){
		s[0]='\0';
		/* se lee la linea y se verifica si es fin del caso de prueba */
		scanf("%[^\n]", s);
		if(strlen(s)==0){
			c++;
			getchar();
			scoreboard.clear();
			/* se ingresan en el scoreboard solo los datos de los usuarios
			 * que hayan hecho submissions. Se aprovecha de incializar los
			 * datos para el proximo test case */
			for(i=1;i<=100;i++){
				if(score[i]>0 || subs[i]>0){
					aux.first=9-score[i];
					aux.second.first=pen[i];
					aux.second.second=i;
										
					scoreboard.push_back(aux);
					score[i]=0;
					pen[i]=0;
					subs[i]=0;
				}
				for(j=1;j<=9;j++){	
					tries[i][j]=0;
					solved[i][j]=false;
				}
			}
			
			sort(scoreboard.begin(), scoreboard.end());
			
			if(c>1 && scoreboard.size()>0)
				printf("\n");
			for(i=0;i<scoreboard.size();i++){
				printf("%d %d %d\n", scoreboard[i].second.second, 9-scoreboard[i].first, scoreboard[i].second.first);
			}
			
			
			T--;
		}else{
			/* se pasa la linea a un stream y se separa */
			iss.str(s);
			iss >> con >> problem >> time >> L;
			if(L=='C' && !solved[con][problem]){
				/* si el problema esta resuelto por primera vez se aumenta
				 * el numero de problemas resueltos, se guarda la penalizacion
				 * acumulada  */
				score[con]++;
				pen[con] += time+20*tries[con][problem];
				solved[con][problem] = true;
				
			}else if(L=='I' && !solved[con][problem]){
				/* si es incorrecto se aumenta el numero de intentos */
				tries[con][problem]++;
				subs[con]++;
			}else{
				/* en cualquier otro caso se registra el intento o envio */
				subs[con]++;
			}
			getchar();
		}
	}
}

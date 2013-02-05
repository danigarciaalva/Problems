<!-- -*- coding: utf-8; -*- -->

Desafío Enero 2013: Las métricas de Halstead
===

Este script en Perl calcula el valor de las métricas de Halstead dados un código fuente y sus operadores.
Mayor información sobre el problema en:

[Desafío Enero 2013: Las métricas de Halstead](http://programando.org/blog/2013/01/desafio-enero-las-metricas-de-halstead/)

Modo de uso:
```shell
$ perl halstead.pl lista_de_operadores.txt codigo_fuente.txt
```

Resultados
---

Código de ejemplo:
```shell

$ perl halstead.pl operadores.txt ejemplo.txt

n1: 6 (input,print,if,else,then,<=,)
N1: 7 (input,print,print,if,else,then,<=,)
n2: 5 ("ingrese un valor:","ganaste","perdiste",a,100,)
N2: 6 ("ingrese un valor:","ganaste","perdiste",a,a,100,)

	Largo del Programa: N = 13
	Tamanio del Vocabulario del Programa: n = 11
	Volumen del Programa: V = 44.9726110422849
	Nivel de Dificultad: D = 3.6
	Nivel del Programa: L = 0.277777777777778
	Esfuerzo de Implementacion: E = 161.901399752226
	Tiempo de Entendimiento: T = 8.99452220845697

```

El script mismo:
```shell

$ perl halstead.pl operadores_pl.txt halstead.pl

n1: 24 (use,sub,return,shift,slurp,foreach,sort,while,<=>,push,split,if,uniq,log,scalar,join,*,+,=~,=,print,/,punct,chr,)
N1: 104 (use,use,sub,return,shift,shift,shift,slurp,slurp,foreach,foreach,foreach,sort,while,while,<=>,push,push,push,split,split,if,if,uniq,uniq,uniq,uniq,log,log,log,log,scalar,scalar,scalar,scalar,join,join,join,join,*,*,*,*,*,*,+,+,+,+,=~,=~,=~,=~,=~,=~,=~,=~,=~,=~,=~,=,=,=,=,=,=,=,=,=,=,=,print,print,print,print,print,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,/,punct,chr,)
n2: 47 ("slurp","uniq",'\n',"^(\+|\*|\.|\?)$","(.*?|.*?)","($op)",'\s+','\S+',"\nn1: $n1 (",',',")\n","N1: $N1 (","n2: $n2 (","N2: $N2 (",")\n\n","	Largo del Programa: N = "," 	Tamanio del Vocabulario del Programa: n = "," 	Volumen del Programa: V = $V 	Nivel de Dificultad: D = $D 	Nivel del Programa: L = "," 	Esfuerzo de Implementacion: E = "," 	Tiempo de Entendimiento: T = ","\n\n",File,Slurp,List,MoreUtils,2,lista,fuente,codigo,b,a,s,g,n,op,92,1,m,operandos,operadores,n1,n2,N1,N2,V,D,18,)
N2: 123 ("slurp","uniq",'\n',"^(\+|\*|\.|\?)$","(.*?|.*?)","($op)",'\s+','\S+',"\nn1: $n1 (",',',")\n","N1: $N1 (",',',")\n","n2: $n2 (",',',")\n","N2: $N2 (",',',")\n\n","	Largo del Programa: N = "," 	Tamanio del Vocabulario del Programa: n = "," Volumen del Programa: V = $V 	Nivel de Dificultad: D = $D 	Nivel del Programa: L = "," 	Esfuerzo de Implementacion: E = "," 	Tiempo de Entendimiento: T = ","\n\n",File,Slurp,List,MoreUtils,2,2,lista,fuente,codigo,fuente,lista,lista,lista,b,a,lista,codigo,s,g,codigo,s,g,codigo,s,n,g,op,lista,op,92,1,op,m,operandos,1,codigo,m,g,codigo,s,g,codigo,s,g,op,lista,codigo,m,g,operadores,1,codigo,s,op,codigo,s,g,op,codigo,operandos,op,op,m,n1,operadores,n2,operandos,N1,operadores,N2,operandos,operadores,operadores,operandos,operandos,V,N1,N2,2,n1,n2,D,n1,2,N2,n2,N1,N2,n1,n2,1,D,V,D,V,D,18,)

	Largo del Programa: N = 227
	Tamanio del Vocabulario del Programa: n = 71
	Volumen del Programa: V = 1395.99259612756
	Nivel de Dificultad: D = 31.4042553191489
	Nivel del Programa: L = 0.0318428184281843
	Esfuerzo de Implementacion: E = 43840.1079124316
	Tiempo de Entendimiento: T = 2435.56155069064

```

/* Caribbean Online Judge
 * Problem: 1805 - Harder A+B
 * Category: Ad hoc
 *
 * Israel Leiva - 06-10-2012
 */
#include <stdio.h>

/* Basic idea: Read two numbers and print out its sum. Easy one (I was just bored).
 * Input specification is vague, so after some WA I figured that keeping the
 * formula intact and using _double_ should work. And it did.
 */
int main(){
	double A, B;
	scanf("%lf %lf", &A, &B);
	printf("%.0lf\n", (A+B)+(A-B)+(B+A)+(B-A));
	return 0;
}

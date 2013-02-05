/* Caribbean Online Judge
 * Problema: 1288 - Div 6
 * Categoria: Aritmetica y Algebra
 * 
 * Israel Leiva - 15-11-2011
 */
import java.math.BigInteger;
import java.util.Scanner;
 
/* El problema se reduce al uso de la clase BigInteger */
class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int N;
		BigInteger zero = new BigInteger("0");
		BigInteger six = new BigInteger("6");
 
		N = sc.nextInt();
		while(N > 0){
			BigInteger num = sc.nextBigInteger();
 
			if((num.mod(six)).compareTo(zero) == 0)
				System.out.println("YES");
			else
				System.out.println("NO");
 
			N--;
		}
	}
}

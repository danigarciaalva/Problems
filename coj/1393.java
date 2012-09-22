/* Caribbean Online Judge
 * Problema: 1393 - Cruel Mathematics Teacher I
 * Categoria: Aritmetica y Algebra
 * 
 * Israel Leiva - 22-11-2011
 */
import java.math.BigInteger;
import java.util.Scanner;
 
/* Gracias a la utilidad toString() de BigInteger el problema se simplifica
 * bastante. */
class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
	
		BigInteger num = sc.nextBigInteger();
		int N = sc.nextInt();
		int i, c=0;
		
		String res = num.pow(N).toString();
		for(i=1;i<=res.length();i++){
			System.out.print(res.charAt(i-1));
			c++;
			if(c==70){
				System.out.println();
				c=0;
			}
		}
		if(c>0)
			System.out.println();
	}
}

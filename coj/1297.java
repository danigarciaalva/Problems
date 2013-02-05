/* Caribbean Online Judge
 * Problema: 1297 - Divisibility by 495
 * Category: Algebra and Arithmetic
 *
 * Israel Leiva - 06-10-2012
 */
import java.math.BigInteger;
import java.util.Scanner;

/* Basic idea: Find out if a given number is divisible by 495
 * The input is less than 10^1000, so it's obvious that big integer
 * arithmetic is needed. Easy one.
 */
class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T;
		BigInteger Number = new BigInteger("495");

		T = sc.nextInt();
		while(T > 0){
			BigInteger N = sc.nextBigInteger();

			if((N.mod(Number)).compareTo(BigInteger.ZERO) == 0)
				System.out.println("YES");
			else
				System.out.println("NO");

			T--;
		}
	}
}

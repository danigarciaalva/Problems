/* Caribbean Online Judge
 * Problema: 1573 - Just Another Easy Problem
 * Categoria: Aritmetica y Algebra
 * 
 * Israel Leiva - 20-11-2011
 */
import java.math.BigInteger;
import java.util.Scanner;
 
/* La complicacion era leer el BigInteger en hexadecimal, habia que investigar
 * un rato */
class Main {
  public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	int T;
    BigInteger one = new BigInteger("1");
	BigInteger two = new BigInteger("2");
	BigInteger zero = new BigInteger("0");
	BigInteger res = new BigInteger("0");
	BigInteger orig = new BigInteger("0");
 
	T = sc.nextInt();
	while(T > 0){
		orig = sc.nextBigInteger(16);
		res = orig.multiply( orig.add(one) );
		res = res.divide(two);
		
		if((res.mod(orig)).compareTo(zero) == 0)
			System.out.println("YES");
		else
			System.out.println("NO");
 
		T--;
	}
  }
}

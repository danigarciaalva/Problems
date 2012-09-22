/* Caribbean Online Judge
 * Problema: 1102 - You Can Say 11
 * Categoria: Aritmetica y Algebra
 * 
 * Israel Leiva - 10-11-2011
 */
import java.math.BigInteger;
import java.util.Scanner;

/* El problema se reduce al uso de la clase BigInteger */
class Main {
  public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		BigInteger zero = new BigInteger("0");
		BigInteger elev = new BigInteger("11");
	
		while(true){
			BigInteger big = sc.nextBigInteger();
			
			if(big.compareTo(zero) == 0)
				break;
				
			if((big.mod(elev)).compareTo(zero) == 0)
				System.out.println(big.toString() + " is a multiple of 11.");
			else
				System.out.println(big.toString() + " is not a multiple of 11.");
		}
	}
}

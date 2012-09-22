/* Caribbean Online Judge
 * Problema: 1592 - The Size is Not Important
 * Categoria: Aritmetica y Algebra
 * 
 * Israel Leiva - 26-11-2011
 */
import java.math.BigInteger;
import java.util.Scanner;
 
/* El problema se reduce al uso de la clase BigInteger */
class Main {
    public static void main(String[] args){
    	Scanner sc = new Scanner(System.in);
    	int N;
        BigInteger A = new BigInteger("0");
    	BigInteger B = new BigInteger("0");
    	BigInteger C = new BigInteger("0");
 
    	N = sc.nextInt();
    	while(2*N > 0){
    		A = sc.nextBigInteger();
    		B = sc.nextBigInteger();
    		C = A.multiply(B);
		
    		System.out.println(C.toString());

    		N--;
    	}
    }
}

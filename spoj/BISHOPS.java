/* Sphere Online Judge
 * Problema: BISHOPS
 * Categoria: Formula
 * 
 * Israel Leiva - 19-11-2011
 */
import java.math.BigInteger;
import java.util.Scanner;


/* Para n < 3 los casos son triviales (0, 1 y 2). Para n >= 3 la manera mas optima es 
 * llenar la fila superior (o inferior) con alfiles. Luego en la fila inferior 
 * (o superior) se pueden llenar todas las casillas exceptos las dos esquinas. Esto
 * se cumple para todos los casos superiores (conjetura). Luego para n >= 3 se pueden
 * ubicar n (fila superior) más n-2 (fila inferior) alfiles.
 */
class Main {
    public static void main(String[] args){
    	Scanner sc = new Scanner(System.in);
		BigInteger two = new BigInteger("2");
		BigInteger one = new BigInteger("1");
		BigInteger zero = new BigInteger("0");
		BigInteger big;
		String num;
		
		while( sc.hasNext() ){
			big = sc.nextBigInteger();
			if(big.compareTo(zero) == 0)
    			System.out.println("0");
			else if(big.compareTo(one) == 0)
    			System.out.println("1");
			else if(big.compareTo(two) == 0)
				System.out.println("2");
			else{
				big = big.add(big);
				big = big.subtract(two);
				System.out.println(big.toString());
			}
		}
	}
}

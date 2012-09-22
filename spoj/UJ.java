/* Sphere Online Judge
 * Problema: UJ - Uncle Jack
 * Categoria: Combinatoria
 * 
 * Israel Leiva - 01-12-2011
 */
import java.math.BigInteger;
import java.util.Scanner;
 
/* La forma de repartir Z CD entre N nietos viene dada por la cantidad de 
 * subconjuntos de N elementos = N^Z */
class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger base = new BigInteger("0");
        int power;
    
        while(true){
            base = sc.nextBigInteger();
    		power = sc.nextInt();
    		if(power == 0 && base.compareTo(BigInteger.ZERO) == 0)
    			break;
    		base = base.pow(power);
    		System.out.println(base);
    	}
    }
}

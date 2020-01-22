import java.math.*;
import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	  public static void main(String[] args) {
    Scanner i= new Scanner(System.in);
    BigInteger a=i.nextBigInteger();
        BigInteger b= i.nextBigInteger();
    BigInteger c= a.pow(b.intValue());
    BigInteger d= b.pow(a.intValue());
    System.out.print(c.subtract(d));
 
 
  }
}

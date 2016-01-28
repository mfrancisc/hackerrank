import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static boolean isPrime(int n) {

    //2 is prime, but multiples of 2 no
    if(n > 2 && (n % 2) == 0) return false;

    //1 and negative are not prime
    if(n <= 1) return false;

    // only odd factors need to be tested up to n^0.5
    for(int i = 3; i * i <= n; i += 2) {
      if (n % i == 0) {
        return false;
      }
    }

    return true;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int cases = sc.nextInt();
    for(int x = 0; x < cases; x++)
    {
      int n = sc.nextInt();
      if(isPrime(n)) 
      {
        System.out.println("Prime");
      }else {
        System.out.println("Not prime");
      }
    }
  }
}


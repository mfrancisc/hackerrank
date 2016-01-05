import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int T = sc.nextInt();
    for(int test = 0; test < T; test++)
    {
      int a = sc.nextInt();
      int b = sc.nextInt();
      int n = sc.nextInt();
      int total = a;
      String totals = "";
      for(int x = 0; x < n; x++){
        double potenza = Math.pow(2, x); 
        total += (potenza * b); 
        totals += total + " ";
      }
      System.out.println(totals);
    }
  }
}

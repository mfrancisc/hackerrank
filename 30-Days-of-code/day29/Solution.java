import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int cases = sc.nextInt();
    sc.nextLine();
    for(int n = 0; n < cases; n++){
      String str = sc.nextLine();
      String s = new String(str);
      int nf = 0;

      for(int x = 0; x < s.length() / 2; x++){
        int a = Math.abs(s.charAt(x+1) - s.charAt(x));
        int pen = s.length() - x - 2;
        int ult = s.length() - x - 1;
        int b = Math.abs(s.charAt(pen) - s.charAt(ult));

        if(a != b){
          System.out.println("Not Funny");
          nf = 1;
          break;
        }
      }

      if(nf == 0) System.out.println("Funny");
    }

  }
}

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int T = sc.nextInt();

    for(int x = 0; x < T; x++){
      int VAL = sc.nextInt();

      String binary = "";
      while(VAL > 0)
      {

        int rest = VAL % 2;
        VAL = VAL / 2;
        binary = Integer.toString(rest) + binary;
      }
      System.out.println(binary);
    }
  }
}


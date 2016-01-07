import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    for(int x = 1; x <= n; x++)
    {
      String repeated = new String(new char[x]).replace("\0", "#");
      String result = new String(new char[n - x]).replace("\0", " ") + repeated;
      System.out.println(result);
    }
  }
}


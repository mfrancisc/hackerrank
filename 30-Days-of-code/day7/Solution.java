import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int N = in.nextInt();

    String line = "";
    for(int i=0; i < N; i++){
      line = in.nextInt() + " " + line;
    }

    System.out.println(line);
  }
}


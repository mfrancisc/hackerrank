import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int arr[][] = new int[6][6];
    for(int i=0; i < 6; i++){
      for(int j=0; j < 6; j++){
        arr[i][j] = in.nextInt();
      }
    }

    //setting the min to lowest possible
    int sum = 6 * (-9);
    int initialCol = 0;
    int initialLine = 0;

    for(int x = 0; x < 4; x++)
    {
      for(int y = 0; y < 4; y++)
      {
        int line = initialLine;
        int col = initialCol;

        int a = arr[line][col];
        col++;
        int b = arr[line][col];
        col++;
        int c = arr[line][col];
        line++;
        col--;
        int d = arr[line][col];
        line++;
        col--;
        int e = arr[line][col];
        col++;
        int f = arr[line][col];
        col++;
        int g = arr[line][col];
        int partSum = a + b + c + d+ e +f +g;

        if(partSum >sum)
        {
          sum = partSum;
        }
        initialCol++;
      }
      initialCol = 0;
      initialLine++;
    }

    System.out.println(sum);
  }
}


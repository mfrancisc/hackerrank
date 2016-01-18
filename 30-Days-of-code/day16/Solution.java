import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static int[] insertionSort(int[] list)
  {
    int n;
    int j;
    for(int a = 1; a < list.length; a ++ )
    {
      n = list[a];
      j = a - 1;

      while(j >= 0 && n < list[j])
      {
        list[j + 1] = list[j];
        j--;
      }

      list[j + 1] = n;
    }

    return list;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int count = Integer.parseInt(sc.nextLine());

    int list[] = new int[count];

    for(int x = 0; x < count; x++)
    {
      list[x] = sc.nextInt();
    }

    list = insertionSort(list);

    int diffList[] = new int[list.length-1];
    int g = 0;
    for(int y = 0; y < list.length - 1; y++)
    {
      int diff = Math.abs(list[y] - list[y+1]);              
      diffList[g] = diff;
      g++;
    }

    int[] diffListResult = insertionSort(diffList);
    int lowestDiff = diffListResult[0];

    for(int b = 0; b < list.length - 1; b++)
    {
      int actDiff = Math.abs(list[b] - list[b+1]); 
      if(actDiff == lowestDiff){
        System.out.print(list[b] + " " + list[b+1] + " ");
      }
    }
  }
}

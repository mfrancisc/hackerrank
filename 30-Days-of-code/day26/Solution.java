import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int actDay = sc.nextInt();
    int actMonth = sc.nextInt();
    int actYear = sc.nextInt();

    sc.nextLine();

    int expDay = sc.nextInt();
    int expMonth = sc.nextInt();
    int expYear = sc.nextInt();

    int hackos = 0;
    if(actYear > expYear) 
    {
      hackos = 10000; 
    } else 
      if(actMonth > expMonth) 
      {
        int lateMonths = actMonth - expMonth;
        hackos = 500 * lateMonths;
      } else
        if(actDay > expDay)
        {
          int lateDays = actDay - expDay;
          hackos = 15 * lateDays;
        }

    System.out.println(hackos);

  }

}

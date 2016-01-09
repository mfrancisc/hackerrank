import java.util.*;
import java.io.*;

class Solution{
  public static void main(String []argh)
  {
    Scanner in = new Scanner(System.in);
    int N=in.nextInt();
    in.nextLine();
    String name;
    String phone;
    Map<String,String> phonenum=new HashMap<String,String>();

    for(int i=0;i<N;i++)
    {
      name =in.nextLine();
      int phoneInt =in.nextInt();
      phone = Integer.toString(phoneInt);
      phonenum.put(name, phone);
      in.nextLine();
    }
    while(in.hasNext())
    {
      String s=in.nextLine();
      if(phonenum.get(s) != null){
        System.out.println(s + "=" + phonenum.get(s));
      }else{
        System.out.println("Not found");
      }

    }
  }
}


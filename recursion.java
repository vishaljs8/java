
import java.util.*;
public  class recursion{

    
      
       public static void main(String[] args)
      {
        Scanner sc = new Scanner(System.in);
System.out.print("enter no.: ");
      int num=sc.nextInt();
      
          System.out.println("factorial is: "+fact(num));
      }
    
    public static int fact(int n)
    {
        
        if(n==0)
    return 1;
    return n*fact(n-1);
    }}
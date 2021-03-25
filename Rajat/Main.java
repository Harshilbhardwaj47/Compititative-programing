package Exception;
import java.util.Scanner;
class Excep
{
     int a,b,c;
     void fun()
     {
        System.out.println("enter two number");
         Scanner input=new Scanner(System.in);
         a=input.nextInt();
         b=input.nextInt();
          try
          {
             c=a/b;
          }
          catch(ArithmeticException e)
            {
              System.out.println("invalid Statement");
           }
      }
}
   public class Main
{
    public static void main(String[] args)
       { 
          Excep s=new Excep();
         s.fun();
        }
}
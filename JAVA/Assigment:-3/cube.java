import java.util.Scanner;
@FunctionalInterface
interface fun
{
   int cal(int k);
}
public class cube
{
      public static void main(String[] args)
      {
         Scanner s= new Scanner(System.in);
         System.out.print("Enter Number : ");
         int  x=s.nextInt();
         fun c=(int k)-> k*k*k;
         int ans=c.cal(x);
         System.out.println("CUBE : "+ans);
      }
}






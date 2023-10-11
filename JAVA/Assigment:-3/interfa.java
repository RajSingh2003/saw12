import java.util.Scanner;
interface operation
{
    void input();
    void output();
}
class cylinder implements operation
{
    double r,h;
    public void input()
    {
         Scanner s= new Scanner(System.in);
         System.out.println("Enter radius : ");
         r=s.nextDouble();
         System.out.println("Enter Height : ");
         h=s.nextDouble();
    }
    public void output()
    {
          double a=2*3.14*r*(r+h);
          double v=3.14*r*r*h;
          System.out.println("Area of Cylinder : "+a);
          System.out.println("Volume of Cylinder : "+v);
    }
}

public class interfa
{
     public static void main(String[] args)
     {
          cylinder c=new cylinder();
          c.input();
          c.output();
     }
}



          
          
          
    

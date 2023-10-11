import java.util.Scanner;
abstract class staff
{
     protected int id;
     protected String name;
     public staff(int id,String name)
     {
           this.id=id;
           this.name=name;
     }
}
class officestaff extends staff
{
      private String dept;
      officestaff(int id,String name,String dept)
      {
           super(id,name);
           this.dept=dept;
      }
      void display()
      {
           System.out.println("ID : "+id);
           System.out.println("NAME : "+name);
           System.out.println("DEPARTMENT : "+dept);
           
      }
}
class absclass
{
     public static void main(String[] args)
     {
          Scanner s=new Scanner(System.in);
          System.out.println("Enter The number of officestaff member : ");
          int n=s.nextInt();
          officestaff []a=new officestaff[n];
          
          for(int i=0;i<n;i++)
          {
             System.out.println("Enter The number of Staff : "+(i+1));
          
             System.out.println("Enter Id : ");
             int id=s.nextInt();
             
             System.out.println("Enter Name : ");
             String name=s.next();
             
             System.out.println("Enter Department: ");
             String dept=s.next();
             
             a[i]=new officestaff(id,name,dept);
          }
          for(int i=0;i<n;i++)
          {
              System.out.println("OFFICESTAFF DETAILS : ");
              a[i].display();
              System.out.println();
          }
          
          
          
          
     }
}






















import java.util.Scanner;
class continent
{
     String cname;
     continent(String canme)
     {
          this.cname=cname;
     }
}
class country extends continent
{
     String coname;
     country(String cname,String coname)
     {
          super(cname);
          this.coname=coname;
     }
}
class state extends country
{
      String sname;
      state(String cname,String coname,String sname)
      {
          super(cname,coname);
          this.sname=sname;
      }
}
class multi
{
     public static void main(String[] args)
     {
          Scanner s=new Scanner(System.in);
          System.out.println("Enter The number of officestaff member : ");
          int n=s.nextInt();
          
          System.out.println("Enter Continant Name : ");
          String cname=s.nextLine();
          
          System.out.println("Enter Country Name : ");
          String coname=s.nextLine();
          
          System.out.println("Enter State Name : ");
          String sname=s.nextLine();
          
          System.out.println("Enter place Name : ");
          String pname=s.nextLine();
          
          System.out.println("Multiheritances" );
          System.out.println("Continent : "+cname);
          System.out.println("Country : "+coname);
          System.out.println("State : "+sname);
          System.out.println("place : "+pname);
          
          
     }
}


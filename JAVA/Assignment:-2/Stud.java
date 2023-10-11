import java.util.Scanner;
package sy;

/*import sy.*;
import ty.*;*/

public class Symark
{
     public int comp,math,ele;
     public Symark(int comp,int math,int ele)
     {
          this.comp=comp;
          this.math=math;
          this.ele=ele;
     }    
}
package ty;
public class Tymark
{
      public int theory,practical;
     public Tymark(int theory,int practical)
     {
          this.theory=theory;
          this.practical=practical;
     }
}


public class Stud
{
      public int roll;
      public String name;
      public sy.Symark symark;
      public ty.Tymark tymark;
      
      public Stud(int roll,String name,Symark symark,Tymark tymark)
      {
          this.roll=roll;
          this.name=name;
          this.symark=symark;
          this.tymark=tymark;
      } 
     public int ttotalmark()
      {
          return symark.comp+symark.math+symark.ele+tymark.theory+tymark.practical;
      }
      public char calculate()
      {
           int totalmark=ttotalmark();
           if(totalmark>=70)
              return 'A';
           else if(totalmark >= 60)
                  return 'B';   
           else if(totalmark >= 50)
                  return 'C'; 
           else if(totalmark >= 40)
                  return 'P';                
          else 
              return 'F';       
      }
      void display()
      {
           char grade=calculate();
           System.out.println("ROLL-NO : "+roll);
           System.out.println("Name : "+name);
           System.out.print("TOTALMARKS : ");
           System.out.println(ttotalmark());
           System.out.println("GRADE : "+grade);
           
      }
      
      
      public static void main(String[] args)
      {
            int i,n;
            Scanner s=new Scanner(System.in);
            //Scanner sc=new Scanner(System.in);
            System.out.print("Enter the Number of Student : ");
            n=s.nextInt();
           // Student []a=new Student[n];
            for(i=0;i<n;i++)
            {
                System.out.println("Enter the Detail of Student : "+(i+1));
                System.out.print("Enter ROLL-NO : ");
                int roll=s.nextInt();
                System.out.print("Enter Name : ");
                String name=s.next();
                System.out.print("Enter SYMARK(COMPUTER ,MATH,ELECTRONICS ) : ");
                int comp=s.nextInt();
                int math=s.nextInt();
                int ele=s.nextInt();
                sy.Symark symark=new sy.Symark(comp,math,ele);
                System.out.print("Enter TYMARK(tHEORY,PRACTICAL ) : ");
                int theory=s.nextInt();
                int practical=s.nextInt();
                ty.Tymark tymark=new ty.Tymark(theory,practical);
                Stud st=new Stud(roll,name,symark,tymark);
                st.display();
                System.out.println();  
            }
      }
      
}





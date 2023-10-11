import java.util.Scanner;
class cplayer
{
     String name;
     int noOfinn;
     int noNotOut;
     int totalRun;
     double batAvg;
     
    cplayer(String name, int noOfinn,int noNotOut,int totalRun)
     {
             this.name=name;
             this.noOfinn= noOfinn;
             this.noNotOut=noNotOut;
             this.totalRun=totalRun;
             this.batAvg=avg(totalRun,noOfinn-noNotOut);
     }
     public static double avg(int totalRun,int numOut)
     {
           if (numOut==0)
           {
               return 0.0;
           }
           return(double)totalRun/numOut;
     }
     public static void sort(cplayer[] player)
     {
           for(int i=0;i<player.length-1;i++)
           {
               for(int j=0;j<player.length-i-1;j++)
               {
                   if(player[j].batAvg<player[j+1].batAvg)
                   {
                        cplayer temp=player[j];
                        player[j]=player[j+1];
                        player[j+1]=temp;
                   }
               }
           }
     }
     public static void display(cplayer[] player)
     {
           System.out.println("Player Details in Sorted By Batting Average....");
           for(cplayer p:player)
           {
               System.out.println("NAME : "+p.name);
               System.out.println("Batting Average : "+P.batAvg);
               System.out.println("Total Runs : "+p.totalRun);
               System.out.println("Number of innings : "+p.noOfinn);
               System.out.println("No of Time Not Out : "+p.noNotOut);
               System.out.println();
               
           }
     }
     
}
public class Crick
{
      public static void main(String[] args)
      {
          Scanner s=new Scanner(System.in);
          System.out.println("Enter the no of Players : ");
          
          int n=s.nextInt();
          cplayer[] player=new cplayer[n];
          for(int i=0;i<n;i++)
          {
              System.out.println("Enter tDetail of player :"+(i+1));
              System.out.println("Name :");
              String name=s.next();
              System.out.println("Number of innings :");
              int inn=s.nextInt();
              System.out.println("Number of of times not out :");
              int notout=s.nextInt();
              System.out.println("Toal Runs :");
              int run=s.nextInt();
              player[i]=new cplayer(name,inn,notout,run);
              
          }
          cplayer.sort(player);
          cplayer.display(player);
      }
}


















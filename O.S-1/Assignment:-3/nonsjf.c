#include<stdio.h>
#include<stdlib.h>
struct process
{
     int at,bt,st,wt,tat,ft,index;
     
};
int main()
{
    int i=0,j=0,max=0,start=0,btime=0,range,pos;
    float awt,atat;
    printf("\nEnter the number of Process : ");
    scanf("%d",&max);
    struct process p[10];
    struct process temp;
    for(i=0;i<max;i++)
    {
       printf("Enter the arraival and brust time %d " ,i+1);
       scanf("%d%d",&p[i].at,&p[i].bt);
       for(i=0;i<max;i++)
       {
          p[i].index=i+1;
       }
       for( i=0;i<max;i++)
       {
          for( j=0;j<max;j++)
          {
              if(p[i].at>p[j+1].at)
              {
                 temp=p[j];
                 p[j]=p[j+1];
                 p[j+1]=temp;
              }
          }
       }
     
     //  int temp=0;
       range=0;
       for(i=0;i<max;i++)
       {
          pos=i;
          for(j=i+1;j<max;j++)
          {
             if(p[i].bt==p[pos].bt)
             {
               temp=p[pos];
               p[pos]=p[j];
               p[j]=temp;
             }
             else if((p[j].bt<p[pos].bt) && (p[j].at<=range))
             {
                  temp=p[pos];
                  p[pos]=p[j];
                  p[j]=temp;
             }
          }
       }
       range=range+p[pos].bt;
       btime=0;
       p[0].st=0;
       for(i=1;i<max;i++)
       {
          btime=btime+p[i-1].bt;
          p[i].st=btime;
       }
       for(i=0;i<max;i++)
       {
          p[i].wt=p[i].st-p[i].at;
          p[i].ft=p[i].bt+p[i].st;
          awt=awt+p[i].wt;
          p[i].tat=p[i].ft-p[i].at;
          atat=atat+p[i].at;
          awt/=max;
          atat/=max;
          printf("\n%d\t%d\n",atat,awt);
       }
     }  
    
    return 0;
}

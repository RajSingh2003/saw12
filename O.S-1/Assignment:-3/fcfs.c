#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,i;
    printf("\nEnter the number of Process : ");
    scanf("%d",&n);
    int at[n],bt[n],wt[n],tat[n],s[n];
    float wtavg=0,tatavg=0;
    //srand(time(NULL));
    printf("\nEnter the Arraival Time and the first CPU brust for each process:\n");
    for(i=0;i<n;i++)
    {
        printf("Arraival time for Process %d :",i+1);
        scanf("%d",&at[i]);
        
       printf("First CPU Brust for Process %d :",i+1);
       scanf("%d",&bt[i]);
        bt[i]=rand()%10;
    }
    //ct[0]=at[0]+bt[0]+2;
   s[0]=0;
    for (i=1;i<n;i++)
    {
        s[i]=s[i-1]+bt[i-1];
    }
    for(i=0;i<n;i++)
    {
       wt[i]=s[i]-at[i];
       wtavg+=wt[i];
       tat[i]=wt[i]+bt[i];
       tatavg+=tat[i];
       
    }
    wtavg/=n;
    tatavg/=n;
   /* printf("\nGantt Chart : \n");
    for(i=0;i<n;i++)
    {
       printf("P%d\t",i+1);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
       printf("%d\t",at[i]);
    }*/
    //printf("%d\n",ct[n-1]);
    printf("\nPRO\tAT\tBT\tWT\tTAT\n");
    for(i=0;i<n;i++)
    {
       printf("P%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],wt[i],tat[i]);
       
    }
    printf("Average WT : %f\n",wtavg);
    printf("Average TAT : %f\n",tatavg);
}    
    
    
    


#include<stdio.h>
#include<sys/wait.h>
int n,a[10];
void bubble()
{
     int i,j,temp;
     for(i=0;i<n;i++)
     {
         for(j=0;j<n-1;j++ )
         {
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               
            }
         }
     }  
     
}
void insertion()
{
     int i,j,temp;
     for(i=0;i<n;i++)
     {
        temp=a[i];
        j=i-1;
        for(j>=0;a[j]>temp;j--)
        {
           a[j+1]=a[j];
        }
        a[j+1]=temp;        
     }
} 

int main()
{
    int i,pid;
    printf("\nEnter the size of Array ");
    scanf("%d",&n);
    printf("\nEnter the Array Elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe Array Elements : ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    pid=fork();
    if (pid==0)
    {
       printf("\nChild Processed ID  : %d ",getpid());
       insertion();
       printf("\nSorted Array Elements : ");
       for (i=0;i<n;i++)
           printf("%d ",a[i]);
       printf("\n");    
    }
    
    else
    {
       wait(NULL);
       printf("\nParent Processed ID : %d ",getpid());
       bubble();
       printf("\nSorted Array Elements : ");
       for (i=0;i<n;i++)
           printf("%d ",a[i]);
       
    }
    
}


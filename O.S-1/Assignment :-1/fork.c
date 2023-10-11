#include<stdio.h>
#include<sys/types.h>
void cp();
void pp();
int main()
{
    pid_t pid;
    printf("\nBefore Fork :Process id :%d\n",pid);
    pid=fork();
    
    if (pid==0)
    {
        cp();
        printf("\nMy id=%d ",getpid());
    }    
    else if(pid>0)
    {
        pp();
        printf("\nMy id=%d ",getpid());
    }    
    else
        printf("Error...");    
    return 0;
}
    void cp()
    {
         printf("\nI am Child process..");
    }    
    void pp()
    {
         printf("I am parent process :");
         
    }
          

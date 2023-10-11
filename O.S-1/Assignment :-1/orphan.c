#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void cp(int pid)
{
     printf("\nI am child Process::");
     printf("\nMy id : %d",getpid());
     printf("\nMy parent id : %d",getppid());    
}
void pp(int pid)
{
     printf("\nI am parent Process::");
     printf("\nMy id : %d",getpid());
     printf("\nMy parent id : %d",getppid());
}
void main()
{
     pid_t pid;
     pid=fork();
     if (pid==0)
     {
        sleep(3);
       /* printf("\nI am child Process::");
        printf("\nMy id : %d",getpid());
        printf("\nMy parent id : %d",getppid();*/
        cp(pid);
     }
     else
     {
         /*printf("\nI am parent Process::");
         printf("\nMy id : %d",getpid());
         printf("\nMy parent id : %d",getppid();*/
         pp(pid);

     }        
}
   



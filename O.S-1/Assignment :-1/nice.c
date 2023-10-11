#include<stdio.h>
void main()
{
    int pid,retnice;
    printf("Press DEL to stop process\n");
    pid=fork();
    for(int i=1;;i++)
    {
        if (pid==0)
        {
           retnice=nice(-5);
           printf("Child get higher CPU priority %d : \n",retnice);
           //sleep(1);
           exit(1);
        }
        else
        {
            retnice=nice(4);
            printf("Parent gets lower CPU priority %d : \n",retnice);
            //sleep(1);
            exit(1);
        }
    }
}

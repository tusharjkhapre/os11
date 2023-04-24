#include <stdio.h>
#include <stdlib.h>
int fork();
int getpid();
int getppid();
int main()
{
    int pid=fork();
    if(pid==0)
    {
    printf("THIS IS THE CHILD PROCESSS.MY PID IS %d and my parent id is:%d\n",getpid(),getppid());
    }
    else
    {
        printf("this is the parent process .my pid is %d and my parent is %d.\n",getpid(),pid);
    }
    return 0;
}

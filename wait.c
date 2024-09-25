#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
printf("begin\n");
pid_t p=fork();
if(p<0)
{
printf("fork failed\n");
}
else if(p==0)
{
printf("child processor");
}
else
{
printf("parent process");
wait(NULL);
printf("child terminated");
}
printf("bye");
}


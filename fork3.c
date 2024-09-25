#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
printf("Begin\n");
pid_t p=fork();
if(p<0)
{
printf("fork failed\n");
}
else if(p==0)
{
printf("child process\n");
}
else
{
printf("parent process\n");
wait(NULL);
printf("child terminated\n");
}
printf("done\n");
}


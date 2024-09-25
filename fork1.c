#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
printf("before fork \n");
pid_t p=fork();
if(p<0)
{
printf("fork failed\n");
}
else if(p==0)
{
printf("i am a child process with id.%d\n" ,getpid());
printf("my parent id is %d\n" ,getpid());
}
else
{
printf("i am a parent process with id:%d\n",getpid());
printf("my process id is:%d\n" ,p);
} 
printf("done\n");
}








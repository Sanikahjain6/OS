#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
pid_t p=fork();
if (p<0)
{
printf("fork failed \n");
}
else if(p==0)
{
printf("child id is %d \n" ,getpid());
printf("parents id is %d \n" ,getpid());
}
else
{
printf("the parent id is %d \n" ,getpid());
wait(NULL);
printf("the id of my child is %d \n" ,p);
}
}



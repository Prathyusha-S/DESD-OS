#include<stdio.h>
#include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
 #include<unistd.h>

int count=0;
int main(int argc,char const *argv[])
{
	pid_t id;
	printf("before main\n");

	id=fork();

	if(0==id)
	{//child
	
	printf("In Child: PID=%d\t PPID=%d\n",getpid(),getppid());
	printf("Count in child %d",count);
	}
	else
	{
	count++;
	printf("In Parent: PID=%d\t PPID=%d\n",getpid(),getppid());
	printf("Count in parent %d\n",count);





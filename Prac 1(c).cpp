#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	int pid;
	//pid = fork();
	
	if (pid<0){
		printf("\n Error ");
		exit(1);
	}
	
	else if (pid==0){
		printf("\n Hello i am child Process");
		printf("\n My pid is %d ",getpid());
		exit(0);
	}
	
	else{
		printf("\n Hello i am parent Process");
		printf("\n My actual pid is %d ",getpid());
		wait(NULL);
		exit(1);
	}
}

#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	pid_t pid,p;
	p = fork();
	pid=getpid();
	if(p<0){
		fprintf(stderr, "Fork Failed");
		return 1;
	}
	printf("Output of fork id : %d \n" ,p);
	printf("Process id  is : %d \n" ,pid);
	return 0;
}

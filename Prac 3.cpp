#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

int main(int argc, char *argv[]){
	int i;
	struct stat s;
	if(argc <2){
		cout<<"\n Enter filename: ";
		//exit(0);
	}
	
	for(i=1;i<argc;i++){
		cout<<"File: "<<argv[i]<<"\n";
		if(stat(argv[i],&s)<0)
			cout<<"error in obtaining stats \n";
		
		else{
			cout<<"owner UID : ";cout<<s.st_uid;cout<<"\n";
			cout<<"Group ID : ";cout<<s.st_gid;cout<<"\n";
			cout<<"Access Permission : ";cout<<s.st_mode;cout<<"\n";
			cout<<"Access Time : ";cout<<s.st_atime;cout<<"\n";
			cout<<"File Size : ";cout<<s.st_size;cout<<"\n";
			cout<<"File Size(in blocks) : ";cout<<s.st_ino;cout<<"\n";
		}
	}
	
	return 0;
}


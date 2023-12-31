#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main(){
	cout<<"\n The kernel version is : \n";
	system("cat /proc/sys/kernel/osrelease");
	cout<<"\n The CPU space : ";
	system("cat /proc/cpuinfo |awk 'NR ==3,NR==4{print}'\n");
	cout<<"\n The amount of cpu time since system was last booted is : ";
	system("cat /proc/uptime\n");
	cout<<"\n The configured memory is : ";
	system("cat /proc/meminfo | awk 'NR==1{print $2}'\n");
	cout<<"\n The amount of free memory is : ";
	system("cat /proc/meminfo | awk 'NR==2{print $2}'\n");
	cout<<"\n The amount of used memory is : ";
	system("cat /proc/meminfo | awk '{if (NR==1) a=$2; if (NR==2) b=$2 }END {print a-b}'\n");
	cout<<endl;
	return 0;
}

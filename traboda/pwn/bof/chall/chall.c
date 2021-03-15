#include<stdio.h>
#include <unistd.h>
int win(){
	execve("/bin/sh",NULL,NULL);
}
int initialize(){
	alarm(30);
	setvbuf(stdout,NULL,2,0);
	setvbuf(stdin,NULL,2,0);
}
int main(){
	initialize();
	char buf[24];
	printf("Do you think you've got what it take to kill Thanos ?\n");
	puts("Send it to me then......");
	gets(buf);
	return 0;
}

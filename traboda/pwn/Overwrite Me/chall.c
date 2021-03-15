#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//gcc -m32 -fno-stack-protector -no-pie chall.c -o chall

void init()
{
    setvbuf(stdin,NULL,_IONBF,0);
    setvbuf(stdout,NULL,_IONBF,0);
    setvbuf(stderr,NULL,_IONBF,0);
    alarm(60);
}

void win()
{
    char flag[50];
	FILE *f = fopen("flag","r");
	if(f == NULL){
		printf("No flag file. If you are running this on the server, contact the admins.");
		exit(0);
	}
	fgets(flag, 50, f);
	puts(flag);
}
 
int main()
{
    init();
    char buf[100];
    int value = 0;
    puts("Can you overwrite me? Enter your input!");
    fgets(buf, 108, stdin);
    if(value != 0)
    {
        puts("Good job! Here's your flag!");
        win();
    }
    else
    {
        puts("Sorry, better luck next time!");
    }
    return 0;
}
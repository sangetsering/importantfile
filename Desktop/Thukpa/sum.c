#include<stdio.h>
#include<stdlib.h>


void main(int argc,char *argv[])
{
	int sum,num1,num2;
	if(argc!=3)
	{
	   puts("not enough argu;\n");
	   exit(0);
    }
    
    num1=atoi(argv[1]);
    num2=atoi(argv[2]);
    
	sum =num1+num2;
    printf("%d",sum);
}
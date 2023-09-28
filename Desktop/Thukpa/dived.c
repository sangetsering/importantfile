#include<stdio.h>
#include<stdlib.h>
#define div 2

void main(int argc,char *argv[])
{
	int num,ans;
	if(argc!=2)
	{
		puts("not enough valuue;\n");
		exit(0);
	}
	num=atoi(argv[1]);
	ans=(num/2);
	printf("%d",ans);
	
}
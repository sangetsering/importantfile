//program to read the characters from file and print the ASCII value
#include<stdio.h>

int main()
{
	FILE *fp;
	char val;
	
	fp=fopen("chara.txt","r");
    while((val=getc(fp))!=EOF)
    {
    	printf("%c--%d \n",val,val);
	}
	fclose(fp);
}
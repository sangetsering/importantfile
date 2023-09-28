#include<stdio.h>
#include<string.h>
int main()
{
	int ch,n=5;
	char string1[10],string2[10];
	printf("enter two string two compare them;\n");
	scanf("%s %s",string1,string2);
	//program to get two string and compare them;
	ch=strncmp(string1,string2,n);
	if(ch==0)
	{
		printf("enter two strings are equal till %d charac;\n",n);
	}
	else
	{
		if(ch>0)
		{
			printf("the string1 is less than string2;\n");
		}
		else
		{
			printf("the string2 is greater than string1;\n");
		}
	}
}
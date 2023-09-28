#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char intu[10],sll;
	printf("enter the name ;\n");
	gets(intu);
	
	for(i=0;i<strlen(intu);i++)
	{
		if(intu[i+1] < intu[i])
		{
			sll=intu[i];
			intu[i]=intu[i+1];
			intu[i+1]=sll;
		}
	}
    
	printf("%s",intu);
}
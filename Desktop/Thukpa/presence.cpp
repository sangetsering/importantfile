#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,a=0,count1=1,count2,n;
	char string[30]="sange is a good sange",nam[5][30],excep[10];
	printf("enter ur string;\n");
	scanf("%s",excep);
	n=strlen(string);
	for(i=0;i<n;i++)
	{
		if(string[i]==' ')
		{
			count1++;
		}
	}
	for(i=0;i<count1;i++)
	{
		for(j=a;string[j]!=' ';j++)
		{
			strcat(nam[i],"str[j]");
		}
		a=j;
	}
	
	if((strstr( nam,excep))!=NULL)
	{
		for(k=0;k<i;k++)
		{
			if(nam[k]=-excep)
			{
				count2++;
			}
		}
	}
	else
	   printf("not present inside;\n");
}
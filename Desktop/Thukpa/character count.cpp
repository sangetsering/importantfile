#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,a=0,count[20],pointer,c=0;
	char check[100],random[100],array[15][25];
	printf("enter the ur string;\n");
	gets(random);
	
	for(i=0;random[i]!='\0';i++)
	{
	    if(random[i]==' ')
	    {
	    	pointer++;
		}
    }
    for(j=0;j<pointer;j++)
	{
	 	for(k=a;random[k]!=' ';k++)
	 	{
	 	    strcpy(array[j][k],random[k]);	
		}
		a=k+1;
    }
	
	for(j=0;j<pointer;j++)
	{
		if(strstr(check,array[j])==NULL)
		{
			for(i=j;i<pointer;i++)
			{
				if(strcmp(array[j],array[i])==0)
				{
					count[c]++;
				}
			}
			strcpy(check,array[j]);
			c++;
		}
		else
		  continue;
	}
	array[pointer+1]='\0';
	
	check[pointer+1]='\0';
	
	count[c+1]='\0';
	
	for(j=0;check[j]!='\0';j++)
	{
		printf("%s ",check[i]);
	}
	for(j=0;j<c;j++)
	{
		printf("%d ",count[i]);
	}			
	
}
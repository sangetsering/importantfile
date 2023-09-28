#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,c=0,pt=0,count[10],s=0,hi,k,n;
	char occur[10],check[10];
	printf("enter the text in a line;\n");
	gets(occur);
	n=strlen(occur);
	
	for(i=0;occur[i]!='\0';i++)
    {
		for(k=0;k<i;k++)
		{
			if(check[k]==occur[i])
			{
				pt=1;
				break;
			}
		}
		if(pt!=1)
		{ 
		    //hi=0;
			for(j=0;occur[j]!='\0';j++)
			{
				hi=0;
				if(occur[j]==occur[i])
				{
					count[s]++;
					hi=1;
				}
				if(j==n && hi==0)
				{
					count[s]=1;
				}
			}
			check[c]=occur[i];
	        s++;
	        c++;
		}
		else
		  continue;
		
	}
	
	for(i=0;check[i]!='\0';i++)
	{
	    printf("%c   %d\n",check[i],count[i]);
    }
}
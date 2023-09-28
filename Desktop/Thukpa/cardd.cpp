#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,pric[5],month[5];
	char car[5][20],san;
	printf("enter the cars name;\n");
	for(i=0;i<5;i++)
	{
		scanf("%s  %d %d ",car[i],&month[i],&pric[i]);
	}
	printf("enter the cars name;\n");
	scanf("%s",san);
	
	for(i=0;i<5;i++)
	{
		if(car[i]==san)
		{
			break;
		}
	}
	j=i-1;
	printf("%s           %d           %d",car[j],month[j],pric[j]);
}
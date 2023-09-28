#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,g=0,a;
	char san[5][25],nas[5][25],asn[5][25],dumy;
	printf("enter the details;\n");
	for(i=0;i<4;i++)
	{
		scanf("%s%s%s%s",san[i],nas[i],asn[i]);
	}
	
	printf("enter the name of car;\n");
	scanf("%s",dumy);
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<strlen(nam);J++)
		{
			if((strcmp(dumy,san[i][j])==0))
			{
				g=1;
				a=i;
			}
	
		}
	}
	printf("\n%s          %s           %s",san[a],nas[a],asn[a]);
}
#include<stdio.h>
#include<string.h>
#define max 10

int main()
{
	int i,j;
	char fas[20][10],sec[20][10],sur[20][10],nam[20][30],tel[20][10],dumy[20];
	
	printf("enter the name including surname and phone name;\n");
	
	for(i=0;i<max;i++)
	{
		scanf("%s %s %s %s",fas[i],sec[i],sur[i],tel[i]);
		/*converting all names in one array with surname as first;*/
		strcpy(nam[i],sur[i]);
		strcat(nam[i],",");
		dumy[0]=fas[i][0];
		dumy[1]='\0';
		strcat(nam[i],dumy);
		strcat(nam[i],".");
		dumy[0]=sec[i][0];
		dumy[1]='\0';
		strcat(nam[i],dumy);
	}
	for(i=0;i<max;i++)
	{
		for(j=1;j<max-i;j++)
		{
			if((strcmp(nam[j-1],nam[j])>0))
			{
				//sorting alphabetical order;
				strcpy(dumy,nam[j-1]);
				strcpy(nam[j-1],nam[j]);
				strcpy(nam[j],dumy);
				
				//sorting phome number;
				strcpy(dumy,tel[j-1]);
				strcpy(tel[j-1],tel[j]);
				strcpy(tel[j],dumy);
			}
		}
	}
	//printing in alphabetical order ;
	printf("customers details\n");
	for(i=0;i<max;i++)
	{
		printf("%-20s\t%-10s",nam[i],tel[i]);
		printf("\n");
	}
}
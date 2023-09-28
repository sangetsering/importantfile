#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char roll[5][20],name[5][20],marks[5][20],dumy[20],fac[20];
	printf("enter ur details;\n");
	for(i=0;i<5;i++)
	{
		scanf("%s %s %s",roll[i],name[i],marks[i]);
	}
	//sorting in roll vise
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if((strcmp(roll[j],roll[i]))<0)
			{
                 strcpy(fac,roll[j]);
				 strcpy(roll[j],roll[i]);
				 strcpy(roll[i],fac);
				 //sorting of name
				 strcpy(dumy,name[j]);
				 strcpy(name[j],name[i]);
				 strcpy(name[i],dumy);
				 //marks sorting
				 strcpy(fac,marks[j]);
				 strcpy(marks[j],marks[i]);
				 strcpy(marks[i],fac);				
			}
			
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s   %s    %s\n",roll[i],name[i],marks[i]);
	}
	
}
//program to read the file the square of integer

#include<stdio.h>
#include<math.h>

int main()
{
	FILE *fp,*fp1;
	int n,sq;
	
	fp=fopen("integer.txt","r");
	fp1=fopen("sir.txt","w");
	while((fscanf(fp,"%d",&n)==1))
	{
		sq=n*n;
		putw(sq,fp1);
	}
	fclose(fp);
	fclose(fp1);
	
	//print the stored content of fp1
	sq=0;
    fp1=fopen("sir.txt","r");
	while((fscanf(fp1,"%d",&sq)==1))
	{
		printf("%d ",sq);
	}
	
	fclose(fp1);
}
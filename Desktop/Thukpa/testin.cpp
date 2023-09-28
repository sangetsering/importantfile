#include<stdio.h>

int main()
{
	FILE *fp,*fp1;
	int n;
	
	fp=fopen("integer.txt","r");
	fp1=fopen("sir.txt","w");
	while((fscanf(fp,"%d",&n)==1))
	{
	    fprintf(fp1,"%d\n",n*n);
	}
	
	fclose(fp1);
	fclose(fp);
//print data
    int long sq;
	fp1=fopen("sir.txt","r");
	while((fscanf(fp1,"%d",&sq)==1))
	{
		printf("%d ",sq);
	}
	
	fclose(fp1);
}
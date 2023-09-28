//program to make sequential file to store the details of products
#include<stdio.h>

//declaring structure
struct product
{
	char pro_cod[10];
	float cost;
	int items;
};

int main()
{
	FILE *pf[5];
    char flname[5][10];
    struct product file[5];
    int i,n;
    void write(struct product *x,FILE *y);
//writing data on file using function and structure  
   printf("enter the number of files you got:\n");
   scanf("%d",&n);  
    for(i=0;i<n;i++)
    {
    	printf("\nenter the details of:");
    	printf("\n name of %d file:",i);
		scanf("%s",flname[i]);           //reading names of files  
    	pf[i]=fopen(flname[i],"w");
    	write(&file[i],pf[i]);
    	fclose(pf[i]);
	}
	
//printing the content of file
   printf("Data from the recored;\n");
    for(i=0;i<n;i++)
    {
    	pf[i]=fopen(flname[i],"r");
    	while(feof(pf[i]))
    	{
    		fscanf(pf[i],"%s %.2f %d",file[i].pro_cod,&file[i].cost,&file[i].items);
    		fprintf(stdout,"%-8s %.2f %7d",file[i].pro_cod,file[i].cost,file[i].items);
		}
		printf("\n\n");
		fclose(pf[i]);
	}
	
	
}

void write(struct product *detail,FILE *fp)
{
	printf("\nenter product code:");
	scanf("%s",detail->pro_cod);
	
	printf("\nenter cost of product:");
	scanf("%.2f",&detail->cost);
	
	printf("\nenter number of items:");
	scanf("%d",&detail->items);
	fprintf(fp,"%s %.2f %d",detail->pro_cod,detail->cost,detail->items);
	printf("\n***************************:");
}
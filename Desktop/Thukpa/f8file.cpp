//program to create sequiential file of 5 products details
#include<stdio.h>
//defining structure for product details
struct product
{
	char pro_name[10];
	char pro_code[10];
	float cost;
	int nitem;
};

int main()
{
	FILE *fp;
	void write(struct product *x,FILE *y);
	void check(char *,FILE *,struct product *);
	struct product detal;
	char filename[10],newline='\n';
	int i=0,n;
	
	//taking input
	printf("enter the file name;\n");
	scanf("%s",filename);
	printf("how many product you got:\n");
	scanf("%d",&n);
	
	//opening file
	fp=fopen(filename,"w");
	//writting in the file
	while(i<n)
	{
		write(&detal,fp);
		putc(newline,fp);
		i++;
	}
	fclose(fp);
	
	//checking wheither content is written or not;
	
	check(filename,fp,&detal);
	return 1;
	   
}

void write(struct product *pro, FILE *pf)
{
    printf("Enter the product name:\n");
    scanf("%s", pro->pro_name);

    printf("Enter the product code:\n");
    scanf("%s", pro->pro_code);

    printf("Enter the product cost:\n");
    scanf("%f", &pro->cost);

    printf("Enter the number of products:\n");
    scanf("%d", &pro->nitem);

    printf("**********************\n");

    fprintf(pf, "%s %s %.2f %d\n", pro->pro_name, pro->pro_code, pro->cost, pro->nitem);
}


void check(char *fname,FILE *fpo,struct product *prod)
{
	char line[1000];
	int num=0;
	fpo=fopen(fname,"r");
	printf("%d",sizeof(line));
	if(fpo==NULL)
	  printf("file can't open;\n");
	while(feof(fpo)!=0);                                //fgets(line, sizeof(line), fpo) != NULL)
	{
		fprintf(stdout,"%-8s %-8s %.2f %7d\n", prod->pro_name, prod->pro_code, prod->cost, prod->nitem);
		printf("\n");
   }
   fclose(fpo);
	
}
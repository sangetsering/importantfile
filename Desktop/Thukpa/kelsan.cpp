//grogram to create random access file

#include<stdio.h>

int main()
{
	FILE *fp;
	int pcode,pcost,pnum;
	int i=0,n;
	
	fp=fopen("kelsan.txt","w");
	printf("enter the details of product:\n code cost no.of item;\n");
	while(i<5)
	{
		scanf("%d %d %d",&pcode,&pcost,&pnum);
		
		fprintf(fp,"%d %d %d",pcode,pcost,pnum);
		i++;
    }
	fclose(fp);
	
	fp=fopen("kelsan.txt","r");
	while(1)
	{
		printf("Enter 1.to diplay contents:\n");
		printf("Enter 2.to Add product in content:\n");
		printf("Enter 3.to modify the product detail:\n");
		printf("Enter 4.to get the particular product detail:\n");

		printf("Enter any other numb to exit:\n");
		scanf("%d",&n);
		
		switch(n)
		{
			int M;
			int ucode;
			case 1: 
			        fseek(fp,0l,0);
			        while(!feof(fp))
			        {
			        	fscanf(fp,"%d %d %d %M",&pcode,&pcost,&pnum,&M);
			        	fprintf(stdout,"%d %d %d",pcode,pcost,pnum);
			        	printf("\n");
					}
					break;
			case 2:
			       fseek(fp,0l,2);
			       printf("enter the details of product:\n code cost no.of item;\n");
                   scanf("%d %d %d",&pcode,&pcost,&pnum);
                   
		           fprintf(fp,"%d %d %d",pcode,pcost,pnum);
                
                   if(!feof(fp))
                        break;

		    case 3:
		    	   fseek(fp,0l,0);
		    	   printf("enter your pcode:\n");
		    	   scanf("%d",&ucode);
		    	   while(!feof(fp))
			        {
			        	fscanf(fp,"%d %d %d",&pcode,&pcost,&pnum);
			        	if(pcode==ucode)
						{
							
						  fseek(fp,0,1);
						  printf("enter new cost And new no. of item\n:");
						  scanf("%d%d",&pcost,&pnum);
						  fprintf(fp,"%d %d %d",pcode,pcost,pnum);
					    }
					}
					break;
		    case 4:
		    	   fseek(fp,0l,0);
		    	   printf("enter your pcode:\n");
		    	   scanf("%d",&ucode);
		    	   while(!feof(fp))
			        {
			        	fscanf(fp,"%d %d %d",&pcode,&pcost,&pnum);
			        	if(pcode==ucode)
						{
							
    						fprintf(stdout,"%d %d %d",pcode,pcost,pnum);
					    }
					}
					break;
			default:
				    printf("Invalid choice:\n");
				    break;
		}
	     break;
	}
}
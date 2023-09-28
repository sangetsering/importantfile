//program to read integer from one file and write in reverse in another file

#include<stdio.h>

int main()
{
	FILE *fp1,*fp2;
	int n,i=1,point=0;
	char mark;
	
	fp1=fopen("sfile1.txt","r+");
	printf("enter integer:\n");
	while(i)
	{
	    scanf("%d",&n);
		putw(n,fp1);
		
		point++;
		if(i%5==0)
		{
			printf("DO you want to input more:\n");
			scanf("%c",&mark);
			
			if(mark=='N'||mark=='n')
			    break;
			else
			  continue;
		}
		
		i++;
	}

	fseek(fp1,0l,2);
	fp2=fopen("sfile2.txt","w");
	
	fseek(fp1,-1l,2);
	while((point=getw(fp1))!=EOF)
	{
	    putw(point,fp2);
	}
   
   fclose(fp1);
   fclose(fp2);	
   
 //   rewind(fp2); 
    fp2=fopen("sfile2.txt","r");
	i=0;
	while((point=getw(fp2))!=EOF)
	{
		
	    printf("%3d",getw(fp2));
	    i++;
	}
    fclose(fp2);
	
	return 0;  
}
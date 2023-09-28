//program to create the sorted interger list of value ,and access file using command line 
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	FILE *fp,*fp2;
	int sorlst[15],i,j=0,temp,indicat=0,help=0;
	
	//checking the number of argument 
	if(argc!=10)
	{
		printf("not enough data;\n");
    }
    
    //datas from file1 and file2 is being copied to array called sorlst;
	for(i=1;i<=argc;i++)
	{
		if(i%4==1)
		{
			help=i;
			fp=fopen(argv[i],"r");
	 	if(fp==NULL)
			 printf("file can't open ;\n");
			
			//indicat++;
		}
		else
		{
			if(indicat%3==0)
			{
				fclose(fp);
			}
			else
			{
				sorlst[j] = atoi(argv[i]);
				j++;
				indicat++;
			}
		}
	}
	
	fclose(fp);
	
	//sorting of value in sorlst array;
	for(j=0;j<argc;j++)
	{
		for(i=1;i<argc;i++)
		{
		   if(sorlst[i]<sorlst[i-1])
		   {
		    	temp=sorlst[i-1];
			    sorlst[i-1]=sorlst[i];
			   sorlst[i]=temp;
		   }
	    }
	}
	//openning last file to write data in it
	fp2=fopen(argv[argc],"w");
	for(i=0;i<argc;i++)
	{
		putw(sorlst[i],fp2);
	}
	fclose(fp2);
	
	//opened to read
	fp2=fopen(argv[argc],"r");
	for(i=1;i<=argc;i++)
	{
		fscanf(fp2,"%d",sorlst[i-1]);
		fprintf(stdout,"%d\n",fp2);
	}
	fclose(fp2);	
}
//program to concatenate the contents of two file in a third file
#include<stdio.h>

int main()
{
	FILE *fp1,*fp2,*fp3;
	char box,val;
	
	fp1=fopen("san.txt","r");
	fp3=fopen("concat.txt","w");
	
	
	while((box=getc(fp1))!=EOF)
	{
		fprintf(fp3,"%c",box);
	}
	fclose(fp1);
	fclose(fp3);
	
	
	//opening again to append content from fp2
	fp2=fopen("chara.txt","r");
	fp3=fopen("concat.txt","a+");
	fseek(fp3,0l,2);
	
	while((val=getc(fp2))!=EOF)
	{
		putc(val,fp3);
	}
	
	//read the file of fp3
	
	rewind(fp3);
	
	while((box=getc(fp3))!=EOF)
	{
		fprintf(stdout,"%c",box);
	}
	
	fclose(fp3);
	
}
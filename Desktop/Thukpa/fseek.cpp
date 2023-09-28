//program to emphasiese the use of fseek

#include<stdio.h>

int main()
{
	FILE *fp;
	int offset,indic;
	char filename[10];
	char chold;
	
	printf("\nenter the file name:");
	scanf("%s",filename);
	printf("\nenter the number to move the marker:");
	scanf("%d",&offset);
	
//opening file
   fp=fopen(filename,"r");
   if(fp==NULL)
     printf("\nfile can't open:\n");
   if(offset>0)
   {
   	 fseek(fp,offset,1);
   	 while((chold=getc(fp))!=EOF)
   	     printf("%c",chold);
   }
   else
   {
   	 indic=fseek(fp,-1l,2);
   	 if(indic<0 || indic>0)
   	   printf("\nfile marker has been gone beyond boundry:\n");
   	 else
   	 {
       for(indic=1;indic<=-(offset);indic++)
       {
       	  //  if(getc(fp)!=NULL)
       	    //{
			   printf("%c",getc(fp));
       	       fseek(fp,-2l,1);
       	   //}
	   }
	      		
	 }
   	 
   }
   fclose(fp);
}
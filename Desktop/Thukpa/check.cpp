#include <stdio.h>
#include <string.h>
int main()
{
char line[81], ctr; 
int i,c,
chac= 0,
words = 0,
lines = 0;

printf("KEY IN THE TEXT. \n");
printf("GIVE ONE SPACE AFTER EACH WORD.\n"); 
printf("WHEN COMPLETED giving every line enter D as last enter.\n\n");

while(line[c]!='D');
{
   /* Reading a line of text */

   c = 0;
   while((ctr=getchar()) != '\n')
         line[c++]=ctr;
   line[c]='\0';

//counting the words in a line "/
   if(line[0] =='\0')
    {
	    break ;
    }
        
  else
  {
    words++;
	for(i=0; line[i] != '\0';i++)
	{
	    if(line[i]==' '|| line[i] =='\t') 
		    words++;
    }
  }

/*counting lines and characters */ 
  lines =lines +1;
  chac= chac + strlen(line);
}
printf ("\n");
printf("Number of lines = %d\n", lines);
printf("Number of words = %d\n", words+1);
printf("Number of characters = %d\n", chac);

}
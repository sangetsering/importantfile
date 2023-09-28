#include<stdio.h>
#include<string.h>

int main()
{
    int n,x,z,y;
    char word[11][10]={" ","One","Two","Three","Four","Five","Six","seven","Eight","Nine","\0"},tens[11][10]={" "," ","Twenty ","Thirty ","Forty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninty ","\0"},teens[11][15]={"Ten","Eleven","Twevel","Thirteen","forteen","fifteen","Sixteen","Seventeen","Eighteen","Ninteen","\0"},result[1000];
    float real;
    printf("enter the numbers ;\n");
    scanf("%f",&real);
    x=(int)real;
    
    n=(real-(float)x)*100;
    printf(" %d\n",n);
    
   // calculation for ruppe
    if(999<x<100000)
    {
    	z=x/1000;
    	if(z==0)
    	{
    	    strcat(result,word[z]);
    	}
    	else
    	{
    	    strcat(result,strcat(word[z]," Thousand "));
    	}
    	x=x-z*1000;
	}
    
    if(99<x<1000)
    {
        z=x/100;
        if(z==0)
    	{
    	    strcat(result,word[z]);
    	}
    	else
    	{
    	    strcat(result,strcat(word[z]," Hundred "));
    	}
        x=x-z*100;
    }
    if(19<x<100)
    {
        z=x/10;
        strcat(result,tens[z]);
        x=x-z*10;
    }
    if(x>9)
    {
        z=x%10;
        strcat(result,teens[z]);
    }
    else
    {
    	strcat(result,word[x]);	
	}
    //calculating for paise
    strcat(result," And paise ");
    if(19<n<100)
    {
    	y=n/10;
    	strcat(result,tens[y]);
    	n=n-y*10;
    }
    if(n>9)
    {
		y=n%10;
        strcat(result,teens[y]);
    }
	else
	{
		strcat(result,word[n]);	
	}  
    
    
    printf("%s",result);
}
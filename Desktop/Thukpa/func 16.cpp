#include<stdio.h>

char str1[20],str2[20],str3[20],str4[40];

int main()
{
    char choice;
    void input(void);
    void scopy(char str[]);
    void scomp(char str[],char strc[]);
    void sadd(char str[],char strc[]);
    input();
    
    printf("\nenter ur choices C ; E ; J\n ");
    scanf("%d",&choice);
    
    if(choice=='C')
    {
        printf("ur new copy;\n");
        scopy(str1);
    }
    else
    {
        if(choice=='E')
        {
            printf("after compared;\n");
            scomp(str1,str3);
        }
        else
        {
            if(choice=='J')
            {
                printf("The joined string;\n");
                sadd(str1,str3);
            }
            else
            printf("choice out of range;\n");
        }
    }
}

void input(void)
{
    int i,j;
    printf("enter the string1;\n");
    for(i=0;str1[i]!='\0';i++)
    {
        scanf("%c",&str1[i]);
    }
    
    printf("enter the string2;\n");
    for(j=0;str3[j]!='\0';j++)
    {
        scanf("%c",&str3[i]);
    }
    
}

void scopy(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        str2[i]=str[i];
    }
    str2[i]='\0';
    
    for(i=0;str2[i]!='\0';i++)
    {
        printf("%c",str2[i]);
    }
}

void scomp(char str[],char strc[])
{
    int i,l=0;
    for(i=0;str[i]!='\0' && strc[i]!='\0';i++)
    {
        if(str[i]!=strc[i])
        {
            l=1;
            break;
        }
    }
    if(l==0)
    {
        printf("strings are not equal;\n");
    }
    else
      printf("strings are equal;\n");
}

void sadd(char str[],char strc[])
{
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {
        str4[i]=str[i];
    }
    for(j=0;str2[j]!='\0';j++)
    {
        str4[i+j]=strc[j];
    }
    str4[i+j-1]='\0';
    
    for(i=0;str4[i]!='\0';i++)
    {
        printf("%c",str4[i]);
    }
}
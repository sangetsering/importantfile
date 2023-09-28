//program to find the details of city

#include<stdio.h>
#include<string.h>

//declaring the structure to store the value
struct census
{
    char name[15];
    int pop;
    float litr;
};

//function declares to use
struct census ins(void);
void lista(struct census a[]);
void listl(struct census l[]);
void listp(struct census p[]);

//void prin(struct census a,struct census b,struct census c);

//main part
int main()
{
    struct census cities[5];//cities2[5],cities3[5],cities4[5];
    int i,j;
    
    printf("enter the detail of city ;N:P:L\n");
    for(i=0;i<5;i++)
    {
    //    printf("enter the detail of city ;N:P:L\n");
        cities[i]=ins();
    }
    
    printf("the sorted list base on alphabet order;\n");
    lista(cities);
    
    printf("the sorted list base on poplation;\n");
    listp(cities);
    
    printf("the sorted list base on literacy rate;\n");
    listl(cities);
}

struct census ins(void)
{
    struct census dum;
    scanf("%s %d %f",dum.name,&dum.pop,&dum.litr);
    return (dum);
}

void lista(struct census a[])
{
    struct census dum;
    int i,j,p;
    float l;
    for(i=0;i<5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            if(strcmp(a[j-1].name,a[j].name)>0)
            {
                strcpy(dum.name,a[j-1].name);
                strcpy(a[j-1].name,a[j].name);
                strcpy(a[j].name,dum.name);
                
                //population sorting
                dum.pop=a[j-1].pop;
                a[j-1].pop=a[j].pop;
                a[j].pop=dum.pop;
                //litercay sorting
                dum.litr=a[j-1].litr;
                a[j-1].litr=a[j].litr;
                a[j].litr=dum.litr;
            }
        }
    }
    printf("value;\n");
    for(i=0;i<5;i++)
    {
        printf("%2s : %2d : %2.2f\n",a[i].name,a[i].pop,a[i].litr);
    }
}
void listl(struct census l[])
{
    struct census dum;
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(l[j].litr>l[j+1].litr)
            {
                dum.litr=l[j].litr;
                l[j].litr=l[j+1].litr;
                l[j+1].litr=dum.litr;
                //sorting name
                strcpy(dum.name,l[j].name);
                strcpy(l[j].name,l[j+1].name);
                strcpy(l[j+1].name,dum.name);
                //sorting of popu
                dum.pop=l[j].pop;
                l[j].pop=l[j+1].pop;
                l[j+1].pop=dum.pop;
            }
         }
    }
    printf("value;\n");
    for(i=0;i<5;i++)
    {
        printf("%2s : %2d : %2.2f\n",l[i].name,l[i].pop,l[i].litr);
    }
}

void listp(struct census p[])
{
    struct census dum;
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(p[j].pop>p[j+1].pop)
            {
                dum.pop=p[j].pop;
                p[j].pop=p[j+1].pop;
                p[j+1].pop=dum.pop;
                //litercay sorting
                dum.litr=p[j].litr;
                p[j].litr=p[j+1].litr;
                p[j+1].litr=dum.litr;
                //sorting name
                strcpy(dum.name,p[j].name);
                strcpy(p[j].name,p[j+1].name);
                strcpy(p[j+1].name,dum.name);
            }
        }
    }
    printf("value;\n");
    for(i=0;i<5;i++)
    {
        printf("%2s : %2d : %2.2f\n",p[i].name,p[i].pop,p[i].litr);
    }
}
    

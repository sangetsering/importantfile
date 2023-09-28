//program to ctreate a model for sorting

#include<stdio.h>

int arr[10],arr2[10],comb[20];
int N,M;

int main()
{
    void input(void);
    void sort(int x[],int s);
    void merge(int x[],int y[],int t);
    void fsort(int x[],int s);
    input();
    sort(arr,N);
    sort(arr2,M);
    merge(arr,arr2,N+M);
    fsort(comb,N+M);
    
}
void input(void)
{
    int i;
    printf("enter the size of 1 array ;\n");
    scanf("%d",&N);
    printf("enter the elements;\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter the size of 2 array ;\n");
    scanf("%d",&M);
    printf("enter the elements;\n");
    for(i=0;i<M;i++)
    {
        scanf("%d",&arr2[i]);
    }
}
void sort(int x[],int s)
{
    int i,j,index,L;
    
    for(i=1;i<=s;i++)
    {
        index=0;
        L=x[0];
        for(j=0;j<=s-i;j++)
        {
            if(x[j]>L)
            {
                L=x[j];
                index=j;
            }
        }
        x[index]=x[s-i];
        x[s-i]=L;
    }
}
void merge(int x[],int y[],int t)
{
    int i,j;
    for(i=0;i<N;i++)
    {
        comb[i]=arr[i];
    }
    for(j=0;j<M;j++)
    {
        comb[i+j]=arr2[j];
    }
}

void fsort(int x[],int s)
{
    int i,j,index,L;
    for(i=1;i<=s;i++)
    {
        index=0;
        L=x[0];
        for(j=0;j<=s-i;j++)
        {
            if(x[j]>L)
            {
                L=x[j];
                index=j;
            }
        }
        x[index]=x[s-i];
        x[s-i]=L;
    }
    printf("the sorted combined list;=\n");
    
    for(i=0;i<s;i++)
    {
        printf(" %d",x[i]);
        
    }
}

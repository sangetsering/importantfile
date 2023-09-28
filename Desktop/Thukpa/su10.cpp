//program to develop the detail of hotels
#include<stdio.h>
#include<string.h>

//declaring the structure
struct hotel
{
    char name[15];
    char adrest[20];
    char grad;
    float amt;
    int room;
};
//declarint the funnctions for use
 struct hotel func1(void);
 void func2(struct hotel H[],char let);
 void func3(struct hotel H[],float r);
char x;
//main part
int main()
{
    struct hotel raj[9];
    int i,c;
    float b;
    printf("fill the detail as Na:Ad:Gr:At:Rn\n");
    for(i=0;i<9;i++)
    {
        raj[i]=func1();
    }
    printf("enter!how you want the detail of hotels;1.grade wise 2.price wise.\n");
    scanf("%d",&c);
    if(c==1)
    {
     printf("so which grade:A,B,C:\n");
     scanf("%c",&x);
        func2(raj,x);
    }
    else
    {
        if(c==2)
        {
          printf("enter your buject:\n");
          scanf("%f",&b);
          func3(raj,b);
        }
        else 
          printf("INVALID choice !!!");
    }
}

struct hotel func1(void)
{
    struct hotel ho;
    scanf("%s %s %c %f %d",ho.name,ho.adrest,&ho.grad,&ho.amt,&ho.room);
    return(ho);
}
void func2(struct hotel H[],char let)
{
    struct hotel filt[5];
    int i,l=0,j,FR=0;
    float max=filt[0].amt,dum=0.0;
    char dummy[15];
    for(i=0;i<9;i++)
    {
        if(H[i].grad==let)
        {
            strcpy(filt[l].name,H[i].name);
            strcpy(filt[l].adrest,H[i].adrest);
            filt[l].grad=H[i].grad;
            filt[l].amt=H[i].amt;
            filt[l].room=H[i].room;
            l++;
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i;j++)
        {
            if(filt[j].amt<filt[j+1].amt)
            {
                dum=filt[j+1].amt;
                filt[j+1].amt=filt[j].amt;
                filt[j].amt=dum;
                //sorting of name
                strcpy(dummy,filt[j+1].name);
                strcpy(filt[j+1].name,filt[j].name);
                strcpy(filt[j].name,dummy);
                //sorting adress
                strcpy(dummy,filt[j+1].adrest);
                strcpy(filt[j+1].adrest,filt[j].adrest);
                strcpy(filt[j].adrest,dummy);
                //sorting no.of room
                FR=filt[j+1].room;
                filt[j+1].room=filt[j].room;
                filt[j].room=FR;
                //grade
                filt[j].grad=x;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%5s %5s %3c %3.2f %3d\n",filt[i].name,filt[i].adrest,filt[i].grad,filt[i].amt,filt[i].room);
    }
    
}
void func3(struct hotel H[],float r)
{
    int i;
    for(i=0;i<9;i++)
    {
        if(H[i].amt<r)
        {
          printf("%5s %5s %3c %3f %3d\n",H[i].name,H[i].adrest,H[i].grad,H[i].amt,H[i].room);
        }
        else
        {
            printf("price are above your buject;\n");
        }
    }
}

/*sa tw A  67 5
tr er B  34 9
gre tys C 56 10
der mo A 45 9
fet hu B 56 8
qu lo C 78 7
sange kel A 90 5
tenz inwa B 56 12
karc hung C 76 20 */
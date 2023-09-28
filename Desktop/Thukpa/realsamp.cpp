#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char init[27][12] = { "one “,” two “,” three “,” four “,”five “,” six “,” seven “,” eight “,” nine “,” ten “,” eleven “,” twelve “,” thirteen “,” fourteen “,” fifteen “,” sixteen “,” seventeen “,” eighteen “,” nineteen “,” twenty “,” thirty “,” fourty “,” fifty “,” sixty “,” seventy “,” eighty “,” ninty “};
    char sthou[20]=””,shund[20]=””,sval1[20]=””,sval2[20]=””,result[100]=””;
    int thou=0,hund=0,ten=0,temp=0,val1,val2,num,rem,c=0;
//USING COBOL LOGIC by dinar
     printf(“*****AMOUNT IN WORDS*****nn”);
     printf(“Enter any value (upto 4 digits) : “);
     scanf(“%d”,&num);
     while(num>0){
         rem = num%10;
         c++;
         if(c<=2)
        temp = temp * 10  +rem;
         else if(c==3)
        hund=rem;
         else if(c==4)
         thou=rem;
         num=num/10;
     }
     while(temp>0){  //as ten contains two digit so reverse it
        rem = temp%10;
        ten = ten * 10 + rem;
        temp= temp/10;
     }
     if(thou>0){
       strcpy(sthou,init[thou-1]);
       strcat(sthou,” thousand “);
       strcat(result,sthou);
     }
     if(hund>0){
       strcpy(shund,init[hund-1]);
         if(val2>0){
           strcpy(sval2,init[val2-1]);
           strcat(result,sval2);
          }
     }
     printf(“nnAmount in word is as under n”);
     printf(“%s”,result);
getch();
}       strcat(shund,” hundred “);
       strcat(result,shund);
     }
     if(ten>0){
          if(ten>20){
          val1 = ten/10;
          val2 = ten%10;
          }
          if(val1>0){
           strcpy(sval1,init[val1+(18-1)]);
           strcat(result,sval1);
          }
 
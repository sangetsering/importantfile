//program to write the mixed type of data in a file

#include<stdio.h>

//structure to store mixed data
struct files
{
	char name[20];
	int ADN;
	float hieght;
	int age;
};
//fuction to write the data in file
void write(struct files *x , FILE *fp);

int main()
{
	struct files student;
	FILE *fp;
	int n,i=0;
	printf("How many student's data you want to fill:\n");
	scanf("%d",&n);
	
	fp=fopen("mixf.txt","w");
	while(i<n)
	{
		printf("\nenter the detail of student :%d\n",i+1);
		write(&student,fp);
		i++;
	}
	
	fclose(fp);
	
	int count=0,j;
	fp=fopen("mixf.txt","a+");
	i=0;
	while(i<n)
	{
	    count =count + fscanf(fp,"%s %d %f %d",student.name,&student.ADN,&student.hieght,&student.age); //checking wheither the scanf functionreturns value
		fprintf(stdout,"%4s %2d %2.2f %8d\n",student.name,student.ADN,student.hieght,student.age);
		if(ferror(fp)!=0)
		{
			if(ftell(fp)!=n)
			{
				printf("Data not filled properly.write again:\n");
				j=0;
				while(j<(n-ftell(fp)))
				{
					write(&student,fp);
					j++;
				}
		   }
		}
		else
		{
			if(feof(fp))
			   break;
		}
		i++;
	}	
    fclose(fp);
    
    printf("\n%d",count);
	return 0;	
}

//function reading the data 

void write(struct files *stud,FILE *fp)
{
	printf("enter name:\n");
	scanf("%s",stud->name);
	printf("enter ADN:\n");
	scanf("%d",&stud->ADN);
	printf("enter hieght:\n");
	scanf("%f",&stud->hieght);
	printf("enter age:\n");
	scanf("%d",&stud->age);
	
	fprintf(fp,"%s %2d %2.2f %2d",stud->name,stud->ADN,stud->hieght,stud->age);
	
}
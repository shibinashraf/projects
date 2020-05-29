#include<stdio.h>

struct company
{
char name[30];
int employee_id,salary;
};

void main()
{

struct company employee[20];
int n,i;

printf("\nEnter the number of employees in the company:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nEnter employee %d Name :",i+1);
scanf("%s",&employee[i].name);
printf("\nEnter employee Id :");
scanf("%d",&employee[i].employee_id);
printf("\nEnter employee Salary :");
scanf("%d",&employee[i].salary);
}

printf("\nEmployees Information\n");
for(i=0;i<n;i++)
{
printf("\nEmployee %d \nName : %s",i+1,employee[i].name);
printf("\nEmployee Id : %d",employee[i].employee_id);
printf("\nEmployee Salary : %d",employee[i].salary);
}

}
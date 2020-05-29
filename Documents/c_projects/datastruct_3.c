#include<stdio.h>

union person
{
char name[30],house_name[20],city_name[25],state[20],pin_code[10];
};

void main()
{
union person p1;


printf("\nEnter the name of the person:");
scanf("%s",&p1.name);

printf("\nEnter the house name of the person:");
scanf("%s",&p1.house_name);

printf("\nEnter city name of the person:");
scanf("%s",&p1.city_name);

printf("\nEnter state of the person:");
scanf("%s",&p1.state);

printf("\nEnter pinode of the person:");
scanf("%s",&p1.pin_code);

printf("\nHouse Name : ");
printf("%s",p1.house_name);
printf("\nCity Name :");
printf("%s",p1.city_name);
printf("\nState : ");
printf("%s",p1.state);
printf("\nPin Code :");
printf("%s",p1.pin_code);

}
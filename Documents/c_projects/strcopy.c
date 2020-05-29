#include<stdio.h>
#include<conio.h>
#include<string.h>

//Declaration of structure called person
struct person
{
char name[30];
char house_name[20],city_name[25],state[20],pin_code[10];
};

//main function
void main()
{

//Declaration of structure member add
struct person add;
clrscr();

//Taking values from the user
printf("\nEnter the name of the person:");
gets(add.name);
printf("\nEnter the house name of the person:");
gets(add.house_name);
printf("\nEnter city name of the person:");
gets(add.city_name);
printf("\nEnter state of the person:");
gets(add.state);
printf("\nEnter pinode of the person:");
gets(add.pin_code);

//Printing values to output window entered by user
printf("\nFollowing information you have entered about the person:\n");
printf("Name : ");
puts(add.name);
printf("\nHouse Name : ");
puts(add.house_name);
printf("\nCity Name :");
puts(add.city_name);
printf("\nState : ");
puts(add.state);
printf("\nPin Code :");
puts(add.pin_code);
getch();
}

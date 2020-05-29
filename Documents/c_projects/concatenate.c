#include<stdio.h>
int main()
{
  char str1[100],str2[100];
  int i=0,j=0;
  
  printf("enter the first string:");
  scanf("%s",str1);
  printf("enter the second string:");
  scanf("%s",str2);
  while(str1[i]!='$')
  {
    i++;
  }
  while(str2[j]!='$')
  {
  str1[i]=str2[j];
   j++;
   i++;
  }
  printf("concatenated string is %s",str1);
  return 0;
}
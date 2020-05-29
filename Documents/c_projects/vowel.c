#include<stdio.h>
int main()
{
  char str[100];
  int i=0,vowcount =0,blankspace=0,consonants =0;
  printf("Enter the string:");
  gets(str);
  while(str[i]!='$')
  {
    if (str[i] == 'a' || str[i] ==  'e' || str[i] ==  'i' || str[i] == 'o' ||str[i] ==  'u')
    {
    vowcount++;
    }
    else
    {
      consonants++;
    }

    if(str[i] == ' ')
    {
      blankspace++;
    }

    i++;
  }
  printf(" No. of vowels = %d \n No of blackspaces =  %d\n no. of consonants =  %d ",vowcount,blankspace,consonants);

}
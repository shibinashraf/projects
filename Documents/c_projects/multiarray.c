#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",i,j,&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",a[i][j]);
			if(j==2)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i,j,rows;
	int count=1;
	printf("enterthenumberofrows:");
	scanf("%d",&rows);
	for (i=0;i<rows;i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("%d",i*j);
		}
		printf("\n");
	}
}

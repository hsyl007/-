#include<stdio.h>
int main()
{
	int n,i,j=0;
	scanf("%d",&n);
	if(n>0)
	{
	for(i=0;i<n;i++)
	{
		for(j=1;j<2*n;j++)
		if(j<n-i||j>n+i)
			printf("  ");
		else if(j>n-i&&j<n+i)
			printf("  ");
		else
			printf("* ");
			printf("\n");
	}
	for(i=2;i<n+1;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if(j<i||j>(2*n-i))
			printf("  ");
		else if(j>i&&j<(2*n-i))
			printf("  ");
		else
			printf("* ");
		}
			printf("\n");
	}
	}
	else
		printf("error");
	return 0;
}
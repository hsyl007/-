#include<stdio.h>

void main()
{
	int i,u;
	for(i=9;i>0;i--)
	{
		for(u=9;u>=i;u--)
		{
			printf("%d*%d=%2d ",i,u,i*u);
		}
		printf("\n");
	}
}
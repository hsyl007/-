#include<stdio.h>
void main()
{
	int i,t,j,n;
	scanf("%d",&n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
				printf("  ");
			printf("*   ");
			for(j=2;j<i;j++)
				printf("    ");
			if(i>1)
			        printf("*");
			printf("\n"); 
		}
		for(t=n-1;t>0;t--)
		{
			for(j=n-t;j>=1;j--)
				printf("  ");
			printf("*   ");
			for(j=t;j>2;j--)
				printf("    ");
			if(t>1)
			        printf("*");
			printf("\n");
		}
	}
	else
		printf("error");
}
/*
由用户输入整数?N，程序输出由“*”模拟的?N?阶空心菱形，若用户输入的数据?<=?0，则输出“error”。

输入说明：一个整数，范围[-20,?+20]
输出说明：按题干描述输出

*/
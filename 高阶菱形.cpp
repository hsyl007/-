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
���û���������?N����������ɡ�*��ģ���?N?�׿������Σ����û����������?<=?0���������error����

����˵����һ����������Χ[-20,?+20]
���˵����������������

*/
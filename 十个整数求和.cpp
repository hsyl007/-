#include<stdio.h>

int main()
{
	int x,sum,i;
	sum=0;
	i=1;
	while(i<=10)
	{
		scanf("%d",&x);
		sum=sum+x;
		i=i+1;
	}
	printf("sum=%d\n",sum);
	return 0;
}

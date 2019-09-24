#include<stdio.h>
int main()
{
	int m,i,sum=0;
	for (m=2;m<=1000;m++)
	{
		for(i=0;i<10;i++)
		if(m%i==0)
				break;
			if(i>=m)
			{
				printf("%d  ",m);
				sum=sum+m;
			}
	}
	printf("sum=%d\n",sum);
	return 0;
}
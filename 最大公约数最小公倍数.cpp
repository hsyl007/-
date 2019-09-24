#include<stdio.h>
void main()
{
	int m,n,x,max,min=1;
	int i,t;
	scanf("%d%d",&m,&n);
	x=(m>n)?m:n;
	for(i=1;i<x;i++)
	{
		if(m%i==0&&n%i==0)
			max=i;
	}
	for(t=1;t<x;t++)
	{
		if(m%t==0&&n%t==0)
		{
			min=t*min;
			if(m*n!=0)
			{
				m=m/t;
				n=n/t;
			}
			else
			{
				m=m%t;
				n=n%t;
			}
		}
	}
	min=min*m*n;
	if(m==n)
		printf("%d %d\n",max,m);
	else

	printf("%d %d\n",max,min);
}
#include<stdio.h>
int main()
{
	int m,n,max,min;
	scanf("%d%d",&m,&n);
	if(m>n)
	{
	m=m+n;
	n=m-n;
	m=m-n;
	}
	for(max=m;max>=0;max--)
	if(m%max==0 && n%max==0)
	{
		printf("%d ",max);
		break;
	}

	for(min=n;min<=m*n;min++)
	if(min%m==0 && min%n==0)
	{
	printf("%d",min);
	break;
	}
	return 0;
}

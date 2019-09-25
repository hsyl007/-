#include<stdio.h>

void main()
{
	int i=0,sum,a,b,c;
	for(i=99;i<1000;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		sum=a+b+c;
		if(sum==10)
			printf("%d\n",i);
	}
}

#include<stdio.h>
main ()
{
	int a[10],*p,sum;
	float ave;
	for (p=a;p<=a+5;P++)
	{
		scanf("%d",p);
	}
	sum=0;
	for (p=a;p<=a+5;P++)
	{
		sum+=*p;
	}
	ave=sum/6.0;
	printf("the average value of six numbers is %.2f\n",ave);
	return 0;
}
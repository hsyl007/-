#include<stdio.h>
void main()
{
	int count=1,sum=0;
	while (count<=100)
	{
		sum=sum+count;
		count++;
	}
	printf ("%d\n",sum);
}

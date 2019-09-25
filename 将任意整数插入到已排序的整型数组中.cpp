#include<stdio.h>
int main ()
{
	int a[10]={1,2,3,5,6},i;
	int *b;
	scanf("%d",b);
	for(i=0;i<10;i++)
	{
		if (*b>=a[i])
		{
			a[i]=a[i+1];
		}
	printf("%d",a[i]);
	}
	return 0;
}
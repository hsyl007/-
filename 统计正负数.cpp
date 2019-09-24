#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c,n,i;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c);

	if(c>0)
		a=a+1;
	else
		b=b+1;
	}
	printf("%d %d",a,b);
	return 0;
}
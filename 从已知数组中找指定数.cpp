#include<stdio.h>
void main()
{
	int a[50],n,x,y=0;
	int i,v;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			y++;
		}
	}
	if(y==0)
		printf("%d\n",y);
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				printf("%d",i);
			}
		}
	}
}
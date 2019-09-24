#include<stdio.h>
int main()
{
	int a[50];
	int i=0,t,k,j,f=0;
	scanf("%d",&a[i]);
	while(a[i]!=0)
	{
		i=i+1;
		scanf("%d",&a[i]);
	}
	i=i-1;
	scanf("%d",&t);
	for(j=0;j<=i;j++)
	{
		for(k=j;k<=i;k++)
		{
			if(a[j]+a[k]==t)
			{
				f=1;
				break;
			}
			if(f==1)
				break;
		}
	}
	if(f==0)
		printf("no");
	if(f==1)
		printf("yes");
	return 0;
}

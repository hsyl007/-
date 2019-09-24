#include<stdio.h>

int main()
{
	int x,i=0,u,v,t,sum=0;
	int y;
	int a[1000],b[1000],c[1000];
	while(y!=0)
	{
		scanf("%d",&y);
		a[i]=y;
		i++;
	}
	for(v=0;v<i;u++)
	{
		for(u=0;u<;u++)
		{
			b[u]=a[u]%10;
			a[u]=a[u]/10;
			sum=sum+b[u];
		}
		c[v]=sum;
	}
	for(t=0;t<i;t++)
		printf("%d ",c[t]);
}
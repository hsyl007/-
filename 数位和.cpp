#include<stdio.h>

int main()
{
	int x,i=0,u=0,v,t,sum=0;
	int y=1,z;
	int a[1000],b[1000],c[1000],d[1000];
	while(y!=0)
	{
		scanf("%d",&y);
		a[i]=y;
		d[i]=y;
		i++;
	}
	for(v=0;v<i;v++)
	{
		z=a[v];
		if(z!=0)
		{
			while(z>=0)
			{
				b[u]=z%10;
				z=z/10;			
				sum=sum+b[u];
				u++;
			}
			c[v]=sum;
		}
		else
			c[v]=0;
	}
	for(t=0;t<i;t++)
		printf("%d ",c[t]);
}
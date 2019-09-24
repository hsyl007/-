
#include<stdio.h>

void main()
{
	int i=-1,u,v,x,y,z;
	int a[1000];
	scanf("%d%d",&x,&y);
	if(x<y)
		z=y;
	else
		z=x;
	for(u=1;u<=z;u++)
	{
		if(x%u==0&&y%u==0)
		{	
			i++;
			a[i]=u;
		}
	}
	int max,min=1;
	max=a[0];
	v=0;
	while(v<i)
	{
		v=v+1;
		if(max<a[i])
			max=a[i];
	}
	int n,m=-1,t=0;
	int b[1000];
	for(n=2;n<=z;n++)
	{
		if(x%n==0&&y%n==0&&x*y!=0)
		{
			m++;
			b[m]=n;
			if((x/n!=0)&&(y/n!=0))
			{
				x=x/n;
				y=y/n;
			}
			n=2;
		}
	}
	while(t<=m)
	{
		min=b[t]*min;
		t=t+1;
	}
	if(x%2==0&&y%2==0)
	{
		min=min*x*y/2;	
		if(x==y)
		printf("%d %d\n",max,x);
		else
			printf("%d %d\n",max,min);
	}
	else
	{
		min=min*m*n;
		printf("%d %d\n",max,min);
	}
}

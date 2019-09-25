#include<stdio.h>

void main()
{
	int x,n,y,i,z;
	scanf("%d",&x);
	int a[32];
	z=x;
	if(z>0)
	{
		i=0;
		while(x>0)
		{
			a[i]=x%2;
			x=x/2;
			i++;
		}
		for(n=i-1;n>=0;n--)
			printf("%d",a[n]);
		x=z;
	}
	else if(z==0)
		printf("0");
	else
	{
		i=0;
		y=-x;
		while(y>0)
		{	
			a[i]=y%2;
			y=y/2;
			i++;
		}
		y=-z;
		printf("-");
		for(n=i-1;n>=0;n--)
			printf("%d",a[n]);
	}
}
/*
由用户输入一个十进制整数，程序输出该整数的二进制形式

输入：一个十进制整数，范围[-10000,+10000]
输出：该整数的二进制原码

*/
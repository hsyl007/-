#include<stdio.h>
void main()
{
	int i,v,t,n=0,m=0,u=0;
	int a[1000],b[1000],c[1000];
	int x,y,z;
	scanf("%d",&z);
	while(u<z)
	{
          	scanf("%d",&x);
		y=0;
		for(i=1;i<x;i++)
		{
			if(x%i==0)
				y++;
		}
		if(y==1)
		{
			a[m]=x;
			c[m]=x;
			m++;
		}
		u++;
	}
	for(v=0;v<m;v++)
	{
		n=0;
		while(a[v]>0)
		{
			n=n*10+a[v]%10;
			a[v]=a[v]/10;
		}
		b[v]=n;
	}
	for(t=0;t<m;t++)
	{
		if(c[t]==b[t])
			printf("%d ",b[t]);
	}
}

/*
若一个素数的逆序数还是其自身则称该素数是回文素数，本题要求：由用户输入?N?个整数，程序输出其中的回文素数。

输入：第一行为数据个数?N，第二行为?N?个用空格分隔的整数，数值范围[1,?1000000]。
输出：由空格分隔的整数


*/
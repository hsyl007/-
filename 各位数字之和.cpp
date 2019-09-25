#include<stdio.h>

void main()
{
	int x,i=0,u=0,v,t,n=-1,sum=0;
	int y=1;
	int a[1000],b,c[1000];
	while(y!=0)
	{
		scanf("%d",&y);
		a[i]=y;
		i++;
	}
	for(v=0;v<i;v++)
	{	
                sum=0;
		n++;
		while(a[n]>0)
		{
			b=a[n]%10;
			a[n]=a[n]/10;			
			sum=sum+b;
		}
		c[v]=sum;
	}
	for(t=0;t<i-1;t++)
		printf("%d ",c[t]);
}
/*
【问题描述】
用户输入若干正整数，要求程序输出这些整数的各位数字之和。例如数字?12345?的各位数字之和为?1?+?2?+?3?+?4?+?5?=?15

【输入】
由空格分隔的若干正整数，最后一个是结束标志?0

【输出】
由空格分隔的这些输入的各位数字之和


*/
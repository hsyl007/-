#include<stdio.h>
void main()
{
	int a[50],x,k;
	int n=0,i=50,t,u=0;
	for(t=0;t<i;t++)
	{
		scanf("%d",&x);
		a[n]=x;
		n++;
		if(x==0)
			i=0;
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(t=i;t<n;t++)
		{
			if(a[i]+a[t]==k)
			{
				u=1;
				printf("yes");
				break;
			}
			else
				u=0;
		}
		if(u!=0)
			break;
	}
	if(u==0)
		printf("no");
}
/*
已知一个包含n个元素的整型数组和一个整数K。编程确定数组中是否存在两个数，它们的和等于给定的数K。一个数可以被使用两次。 
例如，如果输入是8，5，2，7而K是12，则答案为yes（5和7）。 
输入：N?个整数（1?<?N?<=?50），均大于?0，?以?0?结束 
输出：若找到这个两个数则输出“yes”，否则输出“no”。
*/
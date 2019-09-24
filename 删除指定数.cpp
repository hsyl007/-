#include<stdio.h>

void main()
{
	int n,m;
	int i,u,t;
	int a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(u=0;u<i;u++)
	{
		if(a[u]!=m)
			printf("%d ",a[u]);
	}

}
/*
由用户输入?N?(10?<=?N?<=?50）个整数，及指定数?X，程序输出删除?X?后的整数序列。 

输入：第一行为?N；第二行为?N?个整数；第三行为?X 
输出：由空格分隔的若干整数 

*/
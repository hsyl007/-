#include<stdio.h>
void main()
{
	float a[20],n,t;
	int i,v;
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(v=0;v<100;v++)
	{
		for(i=1;i<n;i++)
		{
			if(a[i-1]<a[i])
			{
				t=a[i];
				a[i]=a[i-1];
				a[i-1]=t;
			}
		}
	}
	for(i=n-1;i>=0;i--)
	printf("%g ",a[i]);
}
/*
对用户输入的?N?(?0?<?N?<=?20)?个实数进行升序排序并输出排序结果

输入：第一行为?N?的值，第二行为用空格分隔的?N?个实数
输出：N?个用空格分隔的升序排列的实数

*/
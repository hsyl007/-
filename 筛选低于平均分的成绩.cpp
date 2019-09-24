#include<stdio.h>
void main()
{
	float a[50];
	int n;
	float x,sum=0,p;
	int i,v,u=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&x);
		a[i]=x;
	}
	for(i=0;i<n;i++)
	{
		sum=a[i]+sum;
	}
	p=sum/n;	
	printf("%g\n",p);
	for(v=0;v<n;v++)
	{
		if(a[v]<p)
		{
			printf("%g ",a[v]);
		}
	}
}
/*
有?N(?1?<=?N?<=?50)?个学生的成绩依次输入，要求程序输出这些成绩的平均分，并在第一行输出低于平均分的成绩。 

输入：第一行为?N，整数，数值范围[1,?50]；第二行为用空格分隔的?N?个成绩，实数，数值范围[0,?100] 
输出：第一行为平均分，第二行为输入成绩中低于平均分的成绩（用空格分隔，所有输出均使用?%g?输出) 

*/
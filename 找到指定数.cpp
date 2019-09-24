#include<stdio.h>
void main()
{
	float a[50],x,y=0;
	int i,v,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	scanf("%f",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			y++;
			printf("%d",i+1);
		}
	}
	if(y==0)
		printf("%d\n",y);
}
/*
用户输入?N（1?≤?N?≤?50）个整数，然后输入?X?(任意的整数），程序输出?X?在前面?N?个数据中出现的所有序号[1,?N]，如果没有找到，则输出?0 

输入：第一行为数据个数?N；第二行为?N?个由空格分隔的整数（int?型范围内）；第三行为?X?的值。 
输出：X?在上述?N?个数据中出现的秩序号，或?0（未找到） 
*/
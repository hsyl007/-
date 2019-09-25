#include<stdio.h>
void main()
{
	int a[401],n;
	int i=2,u=2;
	scanf("%d",&n);
	a[0]=1;
	a[1]=1;
	if(n>0)
	{
		while(u<=200)
		{
			if(i=a[u-1]+a[u-2])
			{
				a[u]=i;
				u++;
			}
			i++;
		}
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
	}
	else
		printf("error");
}
/*由用户输入?N，当?N?>?0?时打印菲波拉契数列的前?N?项，当?N?<=?0?时输出?“error”

输入：一个整数，范围为[-200,+200]
输出：由空格分隔的一行整数
*/
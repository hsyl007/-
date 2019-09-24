/*由用户输入若干由空格分隔的十进制正整数，以0为结束标志；编写程序输出这些正整数的二进制形式，用空格分隔
思路：先用数组将输入的数字装起来；根据二进制转换为十进制算法
*/
#include<stdio.h>
#include<windows.h>

#define M 64

void main()
{
	int a[M],b[M],i,j,m,n;
	for(i=0;i<M;i++)
	{
		scanf("%d",&a[i]);
		m=i;
		if(a[i]=0)
			break;
	}
	for(i=0;i<M;i++)
	{
		n=0;
		if(a[i]=0)
			break;
		for(j=0;j<64;j++)
		{
			b[j]=a[i]%2;
			a[i]=a[i]/2;
			n++;
			if(a[i]==0)
				break;
		}
		for(j=n-1;j>=0;j--)
		{
			printf("%d",b[j]);
		}
		printf("");
	}
	printf("\n");
}

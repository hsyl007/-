#include<stdio.h>
int main()
{
	int x,y; 
	printf("请输入x的值：");
	scanf("%d",&x);
	if (x<2)
		printf("计算出来的Y值为%d\n",y=1+x);
	else if (2<=x&&x<4)
		printf("计算出来的Y值为%d\n",y=1+(x-2)*(x-2));
	else if (x>=4)
		printf("计算出来的Y值为%d\n",y=(x-2)*(x-2)+(x-1)*(x-1)*(x-1));
	
	return 0;
}

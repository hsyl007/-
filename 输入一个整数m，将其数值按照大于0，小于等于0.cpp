#include<stdio.h>
void main ()
{
	int m;
	puts("请输入一个整数 谢谢！");
	scanf("%d",&m);
	if(m>0)
		printf("%d is greater than 0\n");
	else
		printf("%d is less than or equal to 0\n"); 
}
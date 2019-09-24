/*
对任意给定的一个正整数，判断其是否为素数。输出判断结果
*/
#include<stdio.h>
#include<math.h>
#include<windows.h>
int isprime(int m)
{
	
	
	int i;
	for (i = 2; i < sqrt(m); i++)
	{
		if (m%2==0)
		{
			return 0;
		}
		return 1;
	}

}


int main ()
{
	int n;
	printf("请输入一个数字：\n");
	scanf("%d",&n);
	if (n<=0)
	{
		printf("输入错误\n");
	}
	else{
		if(isprime(n))
			printf("%d是素数\n",n);
		else
			printf("%d不是素数\n",n);
	}
	system("pause");
	return 0;
}

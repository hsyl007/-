#include<stdio.h>

void main()
{
	float M,V,a;
	printf("质量");
	scanf("%f",&M);
	printf("\n体积");
	scanf("%f",&V);
	a=M*V;
	printf("\n密度=%f\n\n",a);
}

/*为什么输入十位数带小数的M=xx.9 V=10后输出的密度为xx8.999996或其他误差数*/
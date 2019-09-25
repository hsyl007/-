#include<stdio.h>
int main()
{
	int n=10;
	float unitprice=20,sumprice,discounted;
	sumprice=unitprice*n;
	discounted=unitprice*0.9;
	printf("the total amount is %f\n",sumprice);
	printf("the discount is %f\n",discounted);
	printf("your comsumption saves %f for you\n",sumprice-discounted);
	return 0;

}
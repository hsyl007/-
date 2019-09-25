#include<stdio.h>
#include<math.h>
int computeNum(int x)
{
	int sum,a,b,c,d,e;
	sum=0;
	x=abs(x);
	a=x/10000;
	b=(x%10000)/1000;
	c=(x%1000)/100;
	d=(x%100)/10;
	e=x%10;
	sum=a+b+c+d+e;
	return sum;
}
void main()
{
	int a,b;
	printf("Please input an integer:");
	scanf("%d",&a);
	b=computeNum(a);
	printf("The sum of all digits is %d\n",b);
}
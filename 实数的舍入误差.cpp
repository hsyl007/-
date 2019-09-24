#include<stdio.h>
int main()
{
	float a,b;
	double c,d;
	a=123456.789e5;
	b=a+20;
	c=123456.789e5;
	d=c+20;
	printf("%f\n%f\n",a,b);
	printf("%lf\n%lf\n",c,d);
	return 0;
}

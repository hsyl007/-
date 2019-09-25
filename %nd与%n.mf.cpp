#include<stdio.h>

main()
{
	int d;
	float a,b,c;
	d=123456;
	a=1234567;
	b=10000;
	c=a/b;
	printf("%5d\n",d);
	printf("%8d\n",d);
	printf("%4.1f\n",c);
	printf("%7.4f\n",c);
	printf("%2.1f\n",c);
	return 0;
}
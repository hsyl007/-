#include<stdio.h>
void main()
{
	int a,b,c,d;
	scanf ("%d %d",&a,&b);
	d=(b-2*a)/2;
	c=a-d;
	if (b>4*a-2||b<2*a+2||a<1||b<1)
	printf("error\n");
	else
	printf("%d %d\n",c,d);
}
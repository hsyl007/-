#include<stdio.h>

void main()
{
	int a,b,x,y;
	a=1;
	b=1;
	x=a++;
	y=++b;
	printf("a=%d,b=%d,x=%d,y=%d\n",a,b,x,y);
}
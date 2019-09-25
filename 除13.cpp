#include<stdio.h>
int main()
{
	int x=11;
	x=(x++*(1/3));
	printf("%d\n",x);
	return 0;
}
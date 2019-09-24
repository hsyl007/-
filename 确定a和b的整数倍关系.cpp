#include<stdio.h>
int mulNum(int a, int b)
{
	if(a%b==0)
		return 1;
	else
		return 0;
}
void main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	mulNum(a,b);
	printf("%d is a multiple of %d\n",a,b);
}
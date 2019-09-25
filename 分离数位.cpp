#include<stdio.h>

int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	a=x/100;
	b=x/10-a*10;
	c=x-a*100-b*10;
	printf("百位%d\n十位%d\n个位%d\n",a,b,c);
	return 0;
}
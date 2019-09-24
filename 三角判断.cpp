#include<stdio.h>

int main()
{
	int a,b,c,x,y;
	scanf("%d%d%d",&a,&b,&c);
	x=a+b;
	if(a>b)
		y=a-b;
	else
		y=b-a;
	if(x>c&&y<c)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

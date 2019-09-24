#include <stdio.h>
int main()
{
	int a,absa;
	printf("enter one number:\n");
	scanf("%d",&a);
	absa=a;
	if (a<0)
		absa=-a;
	printf ("|%d|=%d\n",a,absa);
	return 0;
}
#include<stdio.h>
#include<math.h>
#include<windows.h>
#define pi 3.1415926

void main()
{
	double r;
	scanf("%lf",&r);
	if(r<0)
		printf("-1");
	else
		printf("%0.2f  %0.2f",pi*pow(r,2),2*pi*r);
	printf("\n");
	system("pause");
}


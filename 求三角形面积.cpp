#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,area;
	scanf("%f,%f,%f",&a,&b,&c);
	s=1.0/2*(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%.2f,b=%.2f")
}
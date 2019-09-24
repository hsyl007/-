#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,x1,x2,y,z,h;
	scanf("%f%f",&a,&b,&c);
	y=(b*b-4*a*c)/4.0/a/a;
	if(y>=0)
	{
		x1=sqrt(y)-b/2.0/a;
		x2=-sqrt(y)-b/2.0/a;
		if(x1==x2)
			printf("x1=x2=%g",x1);
		else
			printf("x1=%f x2=%g",x1,x2);
	}
	else if(y<0)
	{
		y=-y;
		z=sqrt(y);
		h=b/2.0/a;
		printf("x1=%g-%gi ",h,z);
		printf("x2=%g+%gi",h,z);
	}
}

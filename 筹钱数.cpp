#include<stdio.h>
void main()
{
	int n=0,a,b=0;
	scanf("%d",&a);
	if(a<0)
		b=1;
	else
	while(a!=0)
	{
		if(a>=100)
		{
			a=a-100;
			n=n+1;
		}
		else if(a<100&&a>=50)
		{
			a=a-50;
			n=n+1;
		}
		else if(a<50&&a>=20)
		{
			a=a-20;
			n=n+1;
		}
		else if(a<20&&a>=10)
		{
			a=a-10;
			n=n+1;
		}
		else if(a<10&&a>=5)
		{
			a=a-5;
			n=n+1;
		}
		else if(a<5&&a>=2)
		{
			a=a-2;
			n=n+1;
		}
		else
		{
			a=a-1;
			n=n+1;
		}
	
	}
	if(b==0)
	printf("%d",n);
	if(b==1)printf("error");
}
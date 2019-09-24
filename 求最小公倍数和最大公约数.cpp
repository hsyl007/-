#include<stdio.h>
int gcd(int a,int b)
{	int i,gcd;
	if(a<b)
	a=a+b;
	b=a-b;
	a=a-b;
	for(i=b;i>0;i--)
	if (a%i==0&&b%i==0)
		gcd=i;
		return gcd;
}
int mul(int a,int b)
{	int i,mul;
	if(a<b)
	a=a+b;
	b=a-b;
	a=a-b;
	for(i=a;i<=a*b;i++)
		if(i%a==0&&i%b==0)
			mul=i;
			return mul;
}
void main()
{
	int a,b,gcd,mul;
	scanf("%d%d",&a,&b);
	gcd=gcd(a,b);
	mul=mul(a,b);
	printf("The gcd is %d, The mul is %d",gcd,mul);
}
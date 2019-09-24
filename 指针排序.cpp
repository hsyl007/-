#include <stdio.h>
int main ()
{
	int *m,*n,*l,a,b,c;
	scanf("%d%d%d",m,n,l);
	a=*m;b=*n;c=*l;
	if(*m<*n)
	{
		*m=*m+*n;
		*n=*m-*n;
		*m=*m-*n;
	}
	if(*m<*l)
	{
		*m=*m+*l;
		*l=*m-*l;
		*m=*m-*l;
	}
	if(*l>*n)
	{
		*n=*n+*l;
		*l=*n-*l;
		*n=*n-*l;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}
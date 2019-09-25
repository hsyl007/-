#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float PI,sum;
	printf("input a n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+1/(n*n);
	PI=sqrt(6*sum);
	printf("PI=%f",PI);
	return 0;
}
#include<stdio.h>
int main()
{
	int n,i;
	float a[50],sum=0,aver=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
		aver=sum/n;
		printf ("%g\n",aver);
	for (i=0;i<n;i++)
		if(a[i]<aver)
			printf("%g ",a[i]);
	return 0;
}
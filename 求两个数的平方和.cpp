#include<stdio.h>
#include<math.h>
#include<windows.h>

void main()
{
	double a[2],sum=0.0;
	int i;
	for(i=0;i<2;i++)
	{
		scanf("%lf",&a[i]);
		
	}
	for(i=0;i<2;i++)
	{
		sum=sum+pow(a[i],2);
		
	}
	printf("%0.2f",sum);
	printf("\n");
	system("pause");
}
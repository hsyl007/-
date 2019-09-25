#include<stdio.h>
#include<math.h>
#include<windows.h>
#define M 100
void main()
{
	int a[M],b[M];
	int i,n,m=0;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);

		if(a[i]=0)
			break;
		m++;
	}
	for(i=0;i<m;i++)
	{
		b[i]=0;
		for(n=0;n<=16;n++)
		{
			b[i]=b[i]+(a[i]%2)*pow(2,n);
			a[i]=a[i]/10;
			if(a[i]=0)
				break;
			
		}
	}
	for(i=0;i<=m;i++)
	{
		printf("%d",b[i]);
		printf("");
		
	}
	printf("\n");
	system("pause");
}
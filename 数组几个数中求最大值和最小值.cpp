#include<stdio.h>
int main()
{
	int a[5];
	int i,min=101,max=0,aver =0;
	printf("ÇëÊäÈë5¸öÊı×Ö\n");
	for (i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(min>=a[i-1])
			min=a[i-1];
	
	}
		for(i=1;i<=5;i++)
	{
		if(max<=a[i-1])
			max=a[i-1];
	
	}
	printf("%d   %d\n",min,max);
	return 0;


}
	float a,b,c,d,e;
	scanf("%f%f%f%f%f%f",&a&b&c&d&e);
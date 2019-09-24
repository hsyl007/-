#include<stdio.h>

int main()
{
	int x,y;
	printf("年份");
	scanf("%d",&x);
	printf("月份");
	scanf("%d",&y);
	switch(y)
	{
	case 2:
		if(x%4==0&&x%100!=0)
			printf("29天\n");
		else if(x%400==0)
			printf("29天\n");
		else
			printf("28天\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:printf("30天\n");
		break;
	default:
		printf("31天\n");
	}
}

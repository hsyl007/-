#include<stdio.h>

int main()
{
	int x,y;
	printf("���");
	scanf("%d",&x);
	printf("�·�");
	scanf("%d",&y);
	switch(y)
	{
	case 2:
		if(x%4==0&&x%100!=0)
			printf("29��\n");
		else if(x%400==0)
			printf("29��\n");
		else
			printf("28��\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:printf("30��\n");
		break;
	default:
		printf("31��\n");
	}
}

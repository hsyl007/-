#include<stdio.h>
void main()
{
	int year,month,daynum;
	scanf("%d%d",&year,&month);
	switch(month)
	{
	case 2:
		if((!(year%4)&&(year%100))||!(year%400))
			daynum=29;
		else
			daynum=28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		daynum=30;
		break;
	default:
		daynum=31;
	}
	printf("year=%d,month=%d,daynum=%d\n",year,month,daynum);
}

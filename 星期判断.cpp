#include<stdio.h>

/*仅从1970年开始*/

void main()
{
	int Year,Month,Day,x,y;
	printf("年份");
	scanf("%d",&Year);
	printf("月份");
	scanf("%d",&Month);
	printf("日期");
	scanf("%d",&Day);
	int m=1,a,b=0,c;
 	if(Year%4==0&&Year%100!=0||Year%400==0)
		a=29;
	else a=28;
	for(m=1;m<Month;m++)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			b=b+31;
		else if(m==4||m==6||m==9||m==11)
			b=b+30;
		else b=b+a;
	}
	c=b+Day;
	int n,sum=0;
	for(n=1970;n<Year;n++)
	{
		if(n%4==0&&n%100!=0)
			sum=sum+366;
		else if(n%400==0)
			sum=sum+366;
		else sum=sum+365;
	}
	y=sum+c;
	if(y%7==0)
		printf("星期三\n");
	else if(y%7==1)
		printf("星期四\n");
	else if(y%7==2)
		printf("星期五\n");
	else if(y%7==3)
		printf("星期六\n");
	else if(y%7==4)
		printf("星期日\n");
	else if(y%7==5)
		printf("星期一\n");
	else if(y%7==6)
		printf("星期二\n");
}
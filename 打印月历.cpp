#include<stdio.h>

void main()
{
	int l[13];
	int Year,Month,x,y,z;
	int i,t=1;
	printf("请输入要查询的年和月");
	scanf("%d%d",&Year,&Month);
	int m=1,a,b=0,c;
 	if(Year%4==0&&Year%100!=0||Year%400==0)
		a=29;
	else a=28;
	l[1]=31;
	l[2]=a;
	l[3]=31;
	l[4]=30;
	l[5]=31;
	l[6]=30;
	l[7]=31;
	l[8]=31;
	l[9]=30;
	l[10]=31;
	l[11]=30;
	l[12]=31;
	for(m=1;m<Month;m++)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			b=b+31;
		else if(m==4||m==6||m==9||m==11)
			b=b+30;
		else b=b+a;
	}
	c=b+1;
	int n,sum=0;
	for(n=11;n<Year;n++)
	{
		if(n%4==0&&n%100!=0)
			sum=sum+366;
		else if(n%400==0)
			sum=sum+366;
		else sum=sum+365;
	}
	y=sum+c;
	if(y%7==0)
		z=5;
	if(y%7==1)
		z=6;
	if(y%7==2)
		z=0;
	if(y%7==3)
		z=1;
	if(y%7==4)
		z=2;
	if(y%7==5)
		z=3;
	if(y%7==6)
		z=4;
	for(i=1;i<=l[Month]+z;i++)
	{
		if(i<=z)
			printf("   ");
		else if(i%7==0)
		{
			printf("%3d\n",t);
			t++;
		}
		else
		{
			printf("%3d",t);
			t++;
		}
	}
	printf("\n");
}
/*
由用户输入年和月，程序打印出该月的月历，每行星期日排第一个，最后一个是星期六。 
提示：公元?1?年的?1?月?1?日是星期一 
输入：用空格分隔的两个正确的年份和月份数(年>0,?1?<=?月?<=?12) 
输出：月历，每个数字占?3?个字符宽度，右对齐 



*/
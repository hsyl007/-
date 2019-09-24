#include<stdio.h>
#include<windows.h>
int leap(int year)
{
	int result;
	if((year%4==0&&year%100!=0)||year%400==0)
	result=1;
	else
	result=0;
	return (result);
}
void main()
{
	int year,result=0;
	printf("请输入年份：\n");
	scanf("%d",&year);
	if(result==1)
		printf("%d年是闰年\n",year);
	else
		printf("%d年不是闰年\n",year);
	system("pause");
}
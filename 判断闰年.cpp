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
	printf("��������ݣ�\n");
	scanf("%d",&year);
	if(result==1)
		printf("%d��������\n",year);
	else
		printf("%d�겻������\n",year);
	system("pause");
}
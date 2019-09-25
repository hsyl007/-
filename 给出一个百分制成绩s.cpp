#include<stdio.h>
int main()
{
	int score,num,flag;
	char grade;
	flag=1;
	printf("请输入一个成绩并按回车键结束\n");
	scanf("%d",&score);
	num=score/10;
	switch (num)
	{
	case 10:
	case 9:grade='A';break;
	case 8:grade='B';break;
	case 7:grade='C';break;
	case 6:grade='D';break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:grade='E';break;
	default:printf ("你输入的成绩有误，请重新输入\n");
	return 0;
	}
	printf("你输入的成绩的等级为：%c。\n",grade);
	return 0;
}
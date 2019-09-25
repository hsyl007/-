#include<stdio.h>
int main()
{
	int a=1;
	int b;
	printf("你的选择是%d",a);
	printf("请输入查询方式（1，2）\n");
	printf("1.学号查找  2.姓名查找");
	scanf("%d",&b);
	if(b==1)
	{
		printf("请输入学生的学号：\n");
		printf("该学生的成绩记录如下:");
		printf("学号 姓名 语文 数学 英语 总分 平均分");
		printf("%d ")
	}
	return 0;
}
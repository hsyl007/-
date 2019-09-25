//用户输入N，程序输出这个数的反序数
#include<stdio.h>
#include<windows.h>
void main()
{
	int m=0;
	char n[1000];
	while((n[m]=getchar())!='\n')
		m++;
	for(int i=m-1;i>=0;i--)
		printf("反序数为：%c",n[i]);
	printf("\n");
	system("pause");
}
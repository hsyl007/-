//�û�����N���������������ķ�����
#include<stdio.h>
#include<windows.h>
void main()
{
	int m=0;
	char n[1000];
	while((n[m]=getchar())!='\n')
		m++;
	for(int i=m-1;i>=0;i--)
		printf("������Ϊ��%c",n[i]);
	printf("\n");
	system("pause");
}
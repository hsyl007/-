#include<stdio.h>
int main()
{
	int score,num,flag;
	char grade;
	flag=1;
	printf("������һ���ɼ������س�������\n");
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
	default:printf ("������ĳɼ���������������\n");
	return 0;
	}
	printf("������ĳɼ��ĵȼ�Ϊ��%c��\n",grade);
	return 0;
}
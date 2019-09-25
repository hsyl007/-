#include<stdio.h>
void move(char chSour,char chDest);
void hanoi(int n,char chA,char chB,char chC);
void main()
{
	int n;
	printf("\nplease input number of the plates:");
	scanf("%d",&n);
	printf("\nMoving %d plates from A to C:",n);//���ú������㲢������
	hanoi(n,'A','B','C');
}
/*
*��������move
*���ܣ���һ�����Ӵ�Դ���ƶ���Ŀ����
*���룺char chSour��Դ����
       char chDest��Ŀ������
*�������
*����ֵ����
*/
void move(char chSour,char chDest)
{
	//��ӡ�ƶ�����
	printf("\nMove the top plate of %c to %c",chSour,chDest);
}
/*
*��������hanoi
*���ܣ���n�����Ӵ�Դ��chA�ƶ���Ŀ����chC����������chB
*���룺char chA��Դ��
       char chB����ʱ��
	   char chC��Ŀ����
*�������
*����ֵ����
*/
void hanoi(int n,char chA,char chB,char chC)
{
	//��鵱ǰ�����������Ƿ�Ϊ1
	if(n==1)
		move(chA,chC);//���ӵ�����Ϊ1����ӡ����󣬲��ټ������еݹ�
	else //������������1���������еݹ����
	{
		hanoi(n-1,chA,chC,chB);
		move(chA,chC);
		hanoi(n-1,chB,chA,chC);
	}
}
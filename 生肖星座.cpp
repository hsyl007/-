#include<stdio.h>

void main()
{
	int Year,Month,Day;
	printf("���");
	scanf("%d",&Year);
	printf("�·�");
	scanf("%d",&Month);	
	printf("����");
	scanf("%d",&Day);
	if(Year%12==0)
		printf("����\n");
	if(Year%12==1)
		printf("����\n");
	if(Year%12==2)
		printf("����\n");
	if(Year%12==3)
		printf("����\n");
	if(Year%12==4)
		printf("����\n");
	if(Year%12==5)
		printf("ţ��\n");
	if(Year%12==6)
		printf("����\n");
	if(Year%12==7)
		printf("����\n");
	if(Year%12==8)
		printf("����\n");
	if(Year%12==9)
		printf("����\n");
	if(Year%12==10)
		printf("����\n");
	if(Year%12==11)
		printf("����\n");

	if(Month==3&&Day>=21)
		printf("������\n");
	else if(Month==4&&Day<=19)
		printf("������\n");
	if(Month==4&&Day>=20)
		printf("��ţ��\n");
	else if(Month==4&&Day<=20)
		printf("��ţ��\n");
	if(Month==5&&Day>=21)
		printf("˫����\n");
	else if(Month==6&&Day<=21)
		printf("˫����\n");
	if(Month==6&&Day>=22)
		printf("��з��\n");
	else if(Month==7&&Day<=22)
		printf("��з��\n");
	if(Month==7&&Day>=23)
		printf("ʨ����\n");
	else if(Month==8&&Day<=22)
		printf("ʨ����\n");
	if(Month==8&&Day>=23)
		printf("��Ů��\n");
	else if(Month==9&&Day<=22)
		printf("��Ů��\n");
	if(Month==9&&Day>=23)
		printf("�����\n");
	else if(Month==10&&Day<=23)
		printf("�����\n");
	if(Month==10&&Day>=24)
		printf("��Ы��\n");
	else if(Month==11&&Day<=22)
		printf("��Ы��\n");
	if(Month==11&&Day>=23)
		printf("������\n");
	else if(Month==12&&Day<=21)
		printf("������\n");
	if(Month==12&&Day>=22)
		printf("Ħ����\n");
	else if(Month==1&&Day<=19)
		printf("Ħ����\n");
	if(Month==1&&Day>=20)
		printf("ˮƿ��\n");
	else if(Month==2&&Day<=18)
		printf("ˮƿ��\n");
	if(Month==2&&Day>=19)
		printf("˫����\n");
	else if(Month==3&&Day<=20)
		printf("˫����\n");
}

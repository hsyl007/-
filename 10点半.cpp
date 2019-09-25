
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

typedef struct card
{
	int Suit;
	char Number;
	float Num;

}Card;
Card OneCard[52];

void ShowCard()
{
	int i,j;
	int sign;
	char Number;
	for (i=0,j=0;i<52;i++,j++)
	{
		if(!(j%13))
		{
			printf("\n");
		}
		switch(OneCard[i].Suit)
		{
		case 0:
			sign=3;
			break;
		case 1:
			sign=4;
			break;
		case 2:
			sign=5;
			break;
		case 3:
			sign=6;
			break;
		default:
			;
		}
		printf("%c%c%c",sign,OneCard[i],Number);
	}
	printf("\n");
}

void Shuffle()
{
	int i,j,temp;
	int suit;
	Card tempcard;

	suit=-1;
	for(i=0;i<52;i++)
{
if(i%13==0)
{
suit++;
}
OneCard[i].Suit=suit;
temp=i%13;
switch(temp)
{
case 0:
OneCard[i].Number='A';
break;
case 9:
OneCard[i].Number='0';
break;
case 10:
OneCard[i].Number='J';
break;
case 11:
OneCard[i].Number='Q';
break;
case 12:
OneCard[i].Number='K';
break;
default:
OneCard[i].Number=temp+'1';
}
if(temp>=10)
{
OneCard[i].Num=0.5;
}
else
{
OneCard[i].Num=(float)(temp+1);
}
}

printf("һ�����Ƶĳ�ʼ�������£�\n");
ShowCard();

	srand(time(NULL));
for(i=0;i<52;i++)
{
j=rand()%52;
tempcard=OneCard[j];
OneCard[j]=OneCard[i];
OneCard[i]=tempcard;
}
}

void tenhalf()
{
int i,count=0;
int iUser=0,iComputer=0;
int flag=1,flagc=1;
char jixu;
Card User[20],Computer[20];
float TotalU=0,TotalC=0;
while (flag==1&&count<52)
{
User[iUser++]=OneCard[count++];
TotalU+=User[iUser-1].Num;
if(count>=52)
{
flag=0;
}
else if(TotalU>10.5)
{
flagc=0;
}
else
{
if((TotalC<10.5&&TotalC<TotalU)||TotalC<7)
{
Computer[iComputer++]=OneCard[count++];
TotalC+=Computer[iComputer-1].Num;
}
}
printf("\n \n �û����ܵ���Ϊ��%.1f\t",TotalU);
printf("\n �û�����Ϊ��");
for(i=0;i<iUser;i++)
{
printf(" %c%c",User[i].Suit+3,User[i].Number);
}
printf("\n");
printf("\n \n ��������ܵ���Ϊ��%.1f\t",TotalC);
printf("\n ���������Ϊ��");
for(i=0;i<iComputer;i++)
{
printf(" %c%c",Computer[i].Suit+3,Computer[i].Number);
}
printf("\n");
if(TotalU<10.5)
{
do
{
printf("\n ��Ҫ����y/n��?\n");
fflush(stdin);
scanf("%c",&jixu);
}while(jixu!='y'&&jixu!='Y'&&jixu!='n'&&jixu!='N');
if(jixu=='y'||jixu=='Y')
{
flag=1;
}
else
{
flag=0;
}
if(count==52)
{
printf("\n ���Ѿ������ˣ�\n");
getch();
break;
}
}
else
break;
}
while(flagc==1&&count<52)
{
if(TotalU>10.5)
{
break;
}
else
{
if(TotalC>10.5&&TotalC<TotalU)
{
Computer[iComputer++]=OneCard[count++];
TotalC+=Computer[iComputer-1].Num;
}
else
{
break;
}
}
}
printf("\n\n �û��ܵ�����%.1f\t",TotalU);
printf("\n �û�����Ϊ��");
for(i=0;i<iUser;i++)
{
printf(" %c%c",User[i].Suit+3,User[i].Number);
}
printf("\n");
printf("\n\n ��������ܵ���Ϊ��%.1f\t",TotalC);
printf("\n ���������Ϊ��");
for(i=0;i<iComputer;i++)
{
printf(" %c%c",Computer[i].Suit+3,Computer[i].Number);
}
printf("\n");

if(TotalC==TotalU)
{
printf("\n\n �û��ͼ���������ƽ�֣�\n");
}
else
{
if(TotalU>10.5&&TotalC>10.5)
{
printf("\n \n �û��ͼ���������ƽ�֣�\n");
}
else if(TotalU>10.5)
{
printf("\n \n �����ˣ�����Ŭ���ɣ�\n");
}
else if(TotalC>10.5)
{
printf("\n \n ��ϲ��Ӯ�ˣ�\n");
}
else if(TotalC>TotalU)
{
printf("\n \n �����ˣ�����Ŭ���ɣ�\n");
}
else
{
printf("\n\n  ��ϲ��Ӯ�ˣ�\n");
}
}
}

void main()
{
char again;

printf("\n 10�����Ϸ��\n");
S1: Shuffle();
tenhalf();
ShowCard();
S2: printf("\n������(y/n)?");
fflush(stdin);
scanf("%c",&again);
if(again=='y'||again=='Y')
{
goto S1;
}
else if(again=='n'||again=='N')
{
goto S3;
}
else
{
printf("\n ����������������룡\n");
goto S2;
}
S3:
printf("\n ��Ϸ������\n");
}

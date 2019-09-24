#include<stdio.h>

void main()
{
	int Year,Month,Day;
	printf("年份");
	scanf("%d",&Year);
	printf("月份");
	scanf("%d",&Month);	
	printf("日期");
	scanf("%d",&Day);
	if(Year%12==0)
		printf("猴年\n");
	if(Year%12==1)
		printf("鸡年\n");
	if(Year%12==2)
		printf("狗年\n");
	if(Year%12==3)
		printf("猪年\n");
	if(Year%12==4)
		printf("鼠年\n");
	if(Year%12==5)
		printf("牛年\n");
	if(Year%12==6)
		printf("虎年\n");
	if(Year%12==7)
		printf("兔年\n");
	if(Year%12==8)
		printf("龙年\n");
	if(Year%12==9)
		printf("蛇年\n");
	if(Year%12==10)
		printf("马年\n");
	if(Year%12==11)
		printf("羊年\n");

	if(Month==3&&Day>=21)
		printf("白羊座\n");
	else if(Month==4&&Day<=19)
		printf("白羊座\n");
	if(Month==4&&Day>=20)
		printf("金牛座\n");
	else if(Month==4&&Day<=20)
		printf("金牛座\n");
	if(Month==5&&Day>=21)
		printf("双子座\n");
	else if(Month==6&&Day<=21)
		printf("双子座\n");
	if(Month==6&&Day>=22)
		printf("巨蟹座\n");
	else if(Month==7&&Day<=22)
		printf("巨蟹座\n");
	if(Month==7&&Day>=23)
		printf("狮子座\n");
	else if(Month==8&&Day<=22)
		printf("狮子座\n");
	if(Month==8&&Day>=23)
		printf("处女座\n");
	else if(Month==9&&Day<=22)
		printf("处女座\n");
	if(Month==9&&Day>=23)
		printf("天秤座\n");
	else if(Month==10&&Day<=23)
		printf("天秤座\n");
	if(Month==10&&Day>=24)
		printf("天蝎座\n");
	else if(Month==11&&Day<=22)
		printf("天蝎座\n");
	if(Month==11&&Day>=23)
		printf("射手座\n");
	else if(Month==12&&Day<=21)
		printf("射手座\n");
	if(Month==12&&Day>=22)
		printf("摩羯座\n");
	else if(Month==1&&Day<=19)
		printf("摩羯座\n");
	if(Month==1&&Day>=20)
		printf("水瓶座\n");
	else if(Month==2&&Day<=18)
		printf("水瓶座\n");
	if(Month==2&&Day>=19)
		printf("双鱼座\n");
	else if(Month==3&&Day<=20)
		printf("双鱼座\n");
}

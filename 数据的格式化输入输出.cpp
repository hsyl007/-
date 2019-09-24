#include<stdio.h>
#include<windows.h>

int main()
{
	unsigned long no;
	unsigned int year,month,day;
	unsigned char sex;
	float chinese,math,english;
	float total,average;
	
	printf("intput the student's NO(8ld):");
	scanf("%8ld",&no);
	printf("intput the student's Birthday(yyyy-mm-dd):");
	scanf("%4d-%2d-%2d",&year,&month,&day);
	fflush(stdin);
	printf("input the student's Sex(M/F):");
	scanf("%c",&sex);
	printf("input the student's Scores(chinese,math ,english):");
	scanf("%f,%f,%f",&chinese,&math,&english);
	total=chinese+math+english;
	average=total/3;
	printf("\n---NO-------birthday--sex--chinese--math--english--total--average\n");
	printf("%08ld  %4d-%2d-%2d  %c    %-5.1f  %-5.1f  %-5.1f  %-5.1f  %-5.1f\n",no,year,month,day,sex,chinese,math,english,total,average);
	system("pause");
	return 0;
	
}
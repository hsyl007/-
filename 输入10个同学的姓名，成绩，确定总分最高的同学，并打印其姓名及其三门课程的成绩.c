#include "stdio.h"
struct Student
{
	char Name[20];
	float Math;
	float English;
	float Physical;
};

void main()
{
	struct Student oStu;
	struct Student oMaxStu;
	int i;
	float fMaxScore; 
	float fTotal;
	printf("\n please input 10 students and there score (�Կո�ֿ�)\n");
	printf("Name  Math  English  Physical \n");
	fMaxScore=0;
	for(i=0;i<10;i++)
	{
		scanf("%s %f %f %f",&oStu.Name,&oStu.Math,&oStu.English,&oStu.Physical);
		fTotal=oStu.Math+oStu.English+oStu.Physical;
		if(fMaxScore<fTotal)//�����ַ������ƺ�����strcpy�����͸�ֵ��佫�ṹ��
		//����oStu�ĸ�����Ա�������ݷֱ��Ƶ�oMaxStu�ж�Ӧ�ĳ�Ա������
		{
			strcpy(oMaxStu.Name,oStu.Name);
			oMaxStu.Math=oStu.Math;
			oMaxStu.English=oStu.English;
			oMaxStu.Physical=oStu.Physical;
			
		}
		
	}
	printf("%s %f %f %f\n",oMaxStu.Name,oMaxStu.Math,oMaxStu.English,oMaxStu.Physical);
}
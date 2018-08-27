#include<stdio.h>
#include<windows.h>
void main()
{
	int temperature;//ʵ������
	float airWeight;//�����ڿ����е�����
	float liquidWeight;//������Һ���е�����
	double density;//���������ܶ�
	double waterDensity[10]={998.97,998.80,998.62,998.43,998.23,998.02,997.80,997.56,997.32,997.07};
	FILE *fp;
	SYSTEMTIME sys;//ϵͳʱ��ṹ��
	printf("*******************************************************\n");
	printf("The Program of the Measurement of Solid Density\n");
	printf("Please input the weight (N) of Solid in the air\n");
	scanf("%f",&airWeight);
	printf("Please input the weight (N) of  solid in the liquid\n");
	scanf("%f",&liquidWeight);
	printf("*******************************************************\n");
	
	
	if((fp=fopen("density.dat","a"))==NULL)//��׷�ӷ�ʽ���ļ�
	{
		printf("The file cannot be opened!\n");
		return 0;
		
	}
	
	GetLocalTime(&sys);//ȡ��ϵͳʱ��
	fprintf(fp,"%4d��%2d��%2d��%2dʱ%2d��%2d��\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute,sys.wSecond);
	for(temperature=0;temperature<10;temperature++)
	{
		density=airWeight*waterDensity[temperature]/(airWeight-liquidWeight);
		printf("The density of this material at %d cel is %f\n",temperature+16,density);
		fprintf(fp,"temperature:%d\tdensity:%f\n",temperature+16,density);//�洢�ļ�
		
	}
	
	fclose(fp);
	printf("**********************************************************");
	return 0;
}

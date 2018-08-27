#include<stdio.h>
#include<windows.h>
void main()
{
	int temperature;//实验室温
	float airWeight;//物体在空气中的重量
	float liquidWeight;//物体在液体中的重量
	double density;//物体自身密度
	double waterDensity[10]={998.97,998.80,998.62,998.43,998.23,998.02,997.80,997.56,997.32,997.07};
	FILE *fp;
	SYSTEMTIME sys;//系统时间结构体
	printf("*******************************************************\n");
	printf("The Program of the Measurement of Solid Density\n");
	printf("Please input the weight (N) of Solid in the air\n");
	scanf("%f",&airWeight);
	printf("Please input the weight (N) of  solid in the liquid\n");
	scanf("%f",&liquidWeight);
	printf("*******************************************************\n");
	
	
	if((fp=fopen("density.dat","a"))==NULL)//以追加方式打开文件
	{
		printf("The file cannot be opened!\n");
		return 0;
		
	}
	
	GetLocalTime(&sys);//取得系统时间
	fprintf(fp,"%4d年%2d月%2d日%2d时%2d分%2d秒\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute,sys.wSecond);
	for(temperature=0;temperature<10;temperature++)
	{
		density=airWeight*waterDensity[temperature]/(airWeight-liquidWeight);
		printf("The density of this material at %d cel is %f\n",temperature+16,density);
		fprintf(fp,"temperature:%d\tdensity:%f\n",temperature+16,density);//存储文件
		
	}
	
	fclose(fp);
	printf("**********************************************************");
	return 0;
}

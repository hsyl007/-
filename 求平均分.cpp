#include<stdio.h>
#include<windows.h>
#define N 100
float average(float a[], int n)
{
	int i;
	float s=0;
	for(i=0;i<n;i++)
	{
		s+=a[i];
		return s/n;
	}
	
}
int main()
{
	int n,i;
	float a[100];
	printf("请输入学生人数：");
	scanf("%d",&n);
	printf("请输入学生成绩：");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		
	}
	printf("平均成绩是：%.3f\n",average(a,n));
	system("pause");
	return 0;
}
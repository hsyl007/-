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
	printf("������ѧ��������");
	scanf("%d",&n);
	printf("������ѧ���ɼ���");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		
	}
	printf("ƽ���ɼ��ǣ�%.3f\n",average(a,n));
	system("pause");
	return 0;
}
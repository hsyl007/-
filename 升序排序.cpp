#include<stdio.h>
void main()
{
	float a[20],n,t;
	int i,v;
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(v=0;v<100;v++)
	{
		for(i=1;i<n;i++)
		{
			if(a[i-1]<a[i])
			{
				t=a[i];
				a[i]=a[i-1];
				a[i-1]=t;
			}
		}
	}
	for(i=n-1;i>=0;i--)
	printf("%g ",a[i]);
}
/*
���û������?N?(?0?<?N?<=?20)?��ʵ�����������������������

���룺��һ��Ϊ?N?��ֵ���ڶ���Ϊ�ÿո�ָ���?N?��ʵ��
�����N?���ÿո�ָ����������е�ʵ��

*/
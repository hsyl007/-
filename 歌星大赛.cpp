/**
title���ڸ��Ǵ����У���N��3<N<50������ίΪ������ѡ�ִ�֣�����Ϊ1-100�֡�
ѡ�����÷�Ϊ��ȥ��һ����߷ֺ�һ����ͷֺ�����N-2��������ƽ��ֵ�����Ϊһ��ʵ������������ʾ��λС����
author��hsyl007
**/

#include<stdio.h>
#include<windows.h>
void main()
{
	int N,i;
	double score[50];
	double sum=0,aver,max,min;
	printf("��������ί������");
	scanf("%d",&N);
	printf("�����������ί�����ķ������Կո�ֿ�����");
	for(i=0;i<N;i++)
		scanf("%lf",&score[i]);
	max=0;min=200;
	for(i=0;i<N;i++)
	{
		if(score[i]>max)
			max=score[i];
		if(score[i]<min)
			min=score[i];
		sum=sum+score[i];
	}
	
	sum=sum-max-min;
	aver=sum/(N-2);
	printf("%0.2f",aver);
	printf("\n");
	system("pause");
	
}
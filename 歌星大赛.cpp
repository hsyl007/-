/**
title：在歌星大赛中，有N（3<N<50）个评委为参赛的选手打分，分数为1-100分。
选手最后得分为：去掉一个最高分和一个最低分后其余N-2个分数的平均值（输出为一个实数，保留并显示两位小数）
author：hsyl007
**/

#include<stdio.h>
#include<windows.h>
void main()
{
	int N,i;
	double score[50];
	double sum=0,aver,max,min;
	printf("请输入评委人数：");
	scanf("%d",&N);
	printf("请输入各个评委给出的分数（以空格分开）：");
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
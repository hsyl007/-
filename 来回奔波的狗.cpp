#include<stdio.h>//男主人回家，女主人和狗前去迎接，男女主人相距为k米，狗在两人之间来回奔波，假设男女主人及狗都是匀速前进，编写程序计算狗在男女主人相遇之前跑了多少米
#include<windows.h>

void main()
{
	double k,v1,v2,v3;//k:初始距离，v1男主人速度，v2女主人速度，v3狗速度
	double s;//狗跑的距离
	printf("请输入初始距离，男主人速度，女主人速度，狗速度分别的值\n");

	scanf("%lf%lf%lf%lf",&k,&v1,&v2,&v3);
	s=k/(v1+v2)*v3;
	printf("狗跑的距离为：%6.21f\n米",s);
	printf("\n");
	system("pause");
}
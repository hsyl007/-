#include<stdio.h>

void main()
{
	int n,i;
	float a[100];
	float x,sum=0,Sum,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		sum=a[i]+sum;
	}
	float max,min;
	int t=0;
	max=a [0];
	min=a [0];
	while(t<n)
	{
		if(max<a[t])
			max=a[t];
		if(min>a[t])
			min=a[t];
		t=t+1;
	}
	Sum=sum-max-min;
	p=Sum/(n-2);
	printf("%.2f",p);
}
/*青年歌手大赛，有?N?（N?>=?3)?个评委给选手打分，计分原则，去掉一个最高分，去掉一个最低分，取剩余评分的平均分。

[输入说明]
第一行是评委个数?N，数值范围[3,?100]
第二行是?N?个用空格分隔的实数，数值范围[0,?100]

[输出说明]
一个实数，四舍五入到百分位，并显示两位小数。
*/
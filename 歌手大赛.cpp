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
/*������ִ�������?N?��N?>=?3)?����ί��ѡ�ִ�֣��Ʒ�ԭ��ȥ��һ����߷֣�ȥ��һ����ͷ֣�ȡʣ�����ֵ�ƽ���֡�

[����˵��]
��һ������ί����?N����ֵ��Χ[3,?100]
�ڶ�����?N?���ÿո�ָ���ʵ������ֵ��Χ[0,?100]

[���˵��]
һ��ʵ�����������뵽�ٷ�λ������ʾ��λС����
*/
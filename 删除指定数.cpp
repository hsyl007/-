#include<stdio.h>

void main()
{
	int n,m;
	int i,u,t;
	int a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(u=0;u<i;u++)
	{
		if(a[u]!=m)
			printf("%d ",a[u]);
	}

}
/*
���û�����?N?(10?<=?N?<=?50������������ָ����?X���������ɾ��?X?����������С� 

���룺��һ��Ϊ?N���ڶ���Ϊ?N?��������������Ϊ?X 
������ɿո�ָ����������� 

*/
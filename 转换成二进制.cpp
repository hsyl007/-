/*���û����������ɿո�ָ���ʮ��������������0Ϊ������־����д���������Щ�������Ķ�������ʽ���ÿո�ָ�
˼·���������齫���������װ���������ݶ�����ת��Ϊʮ�����㷨
*/
#include<stdio.h>
#include<windows.h>

#define M 64

void main()
{
	int a[M],b[M],i,j,m,n;
	for(i=0;i<M;i++)
	{
		scanf("%d",&a[i]);
		m=i;
		if(a[i]=0)
			break;
	}
	for(i=0;i<M;i++)
	{
		n=0;
		if(a[i]=0)
			break;
		for(j=0;j<64;j++)
		{
			b[j]=a[i]%2;
			a[i]=a[i]/2;
			n++;
			if(a[i]==0)
				break;
		}
		for(j=n-1;j>=0;j--)
		{
			printf("%d",b[j]);
		}
		printf("");
	}
	printf("\n");
}

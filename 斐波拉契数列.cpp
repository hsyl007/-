#include<stdio.h>
void main()
{
	int a[401],n;
	int i=2,u=2;
	scanf("%d",&n);
	a[0]=1;
	a[1]=1;
	if(n>0)
	{
		while(u<=200)
		{
			if(i=a[u-1]+a[u-2])
			{
				a[u]=i;
				u++;
			}
			i++;
		}
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
	}
	else
		printf("error");
}
/*���û�����?N����?N?>?0?ʱ��ӡ�Ʋ��������е�ǰ?N?���?N?<=?0?ʱ���?��error��

���룺һ����������ΧΪ[-200,+200]
������ɿո�ָ���һ������
*/
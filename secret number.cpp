#include<stdio.h> 
#include<windows.h>
#define N 4  /*��������6174*/  
void Sort(int a[])     //���ĸ����ֽ������� 
{
	int i,j,temp;
	for(i=0; i<4; i++)     
{
		for(j=0; j<4; j++)
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] =temp;
			}
	}
}
int difference(int a[])   //�õ����ֵ����Сֵ�Ĳ� 
{
	int maxa,mina,ans;
	maxa = a[3]*1000+a[2]*100+a[1]*10+a[0];
	mina = a[0]*1000+a[1]*100+a[2]*10+a[3];
	ans = maxa - mina;
	printf("%5d -%5d=%5d\n",maxa,mina,ans);
	return ans;
}  
int main() 
{
	int a[N];
	int ans=0;
	int n,x1,x2,x3,x4,flag=1,ret=0;
	printf("������һ����λ��:\n(ע����������ֲ�����ȫ����ͬŶ!)\n");
	while(ans!=6174)            //��������6174������ѭ��
	{
		if(ret==0)
		{
			ret++;
			scanf("%d",&n);       //��һ�������
			printf("\n\n�����Ȱ���������λ�����ĸ������ɴ�С���еõ�һ���µ���λ����\n");
			printf("�ٰ���������λ�����ĸ�������С�������еõ���һ���µ���λ����\n");
			printf("�ô�ļ�ȥС�ģ��ٰ���������������õ����ְ�������ķ�������һ�飬\n");
			printf("ֱ������������õ�����6174Ϊֹ��\n\n\n");
			printf("��������������:\n");
			while(flag)
			{
				x1 = n/1000;
				x2 = (n-1000*x1)/100;
				x3 = (n-1000*x1-100*x2)/10;
				x4 = n%10;
				if(ret==1 && (x1==x2 && x1==x3 && x1==x4 && x2==x3 && x2==x4 &&x3==x3))
					continue;    //������ȫ��ͬ��ʱ�򣬲�����
				else
				{
					a[0] = x1;
					a[1] = x2;
					a[2] = x3;
					a[3] = x4;
					flag = 0;
				}
			}
		}
		else      //�ó����ֵ����Сֵ�Ĳ��Ϊn��ѭ��
		{
			n = ans;
			x1 = n/1000;
			x2 = (n-1000*x1)/100;
			x3 = (n-1000*x1-100*x2)/10;
			x4 = n%10;
			a[0] = x1;
			a[1] = x2;
			a[2] = x3;
			a[3] = x4;
		}
		Sort(a);
		ans = difference(a);
	}
	printf("\n����������ʲô�������ֲ���ȫ��ͬ����λ����\n���ն���ص������������6174\n");
	system("pause");
	return 0;
} 

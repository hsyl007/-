/*����ժ�ң���һ��ժ���������ӵ�һ�룬�ֶ�ժ��һ�����ڶ���ժ����ʣ�µ�һ���ֶ�ժ��һ������������������N�����Ϸ�������ֻ��һ�������ˣ���д��������һ������ԭ�м������ӡ�
*/
#include<stdio.h>
#include<windows.h>

int main(){
	int sum(int n);
	int n,y;
	printf("����������N��\n");
	scanf("%d",&n);
	y=sum(n);
	printf("��һ�������ϵ�������Ϊ��%d\n",y);
	system("pause");
	return 0;
}

int sum(int n)
{
	int s;
	if(n<1) s=0;
	else if(n==1) s=1;
	else s=(sum(n-1)+1)*2;
	return s;
}
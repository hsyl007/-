/*
�����������һ�����������ж����Ƿ�Ϊ����������жϽ��
*/
#include<stdio.h>
#include<math.h>
#include<windows.h>
int isprime(int m)
{
	
	
	int i;
	for (i = 2; i < sqrt(m); i++)
	{
		if (m%2==0)
		{
			return 0;
		}
		return 1;
	}

}


int main ()
{
	int n;
	printf("������һ�����֣�\n");
	scanf("%d",&n);
	if (n<=0)
	{
		printf("�������\n");
	}
	else{
		if(isprime(n))
			printf("%d������\n",n);
		else
			printf("%d��������\n",n);
	}
	system("pause");
	return 0;
}

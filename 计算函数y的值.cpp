#include<stdio.h>
int main()
{
	int x,y; 
	printf("������x��ֵ��");
	scanf("%d",&x);
	if (x<2)
		printf("���������YֵΪ%d\n",y=1+x);
	else if (2<=x&&x<4)
		printf("���������YֵΪ%d\n",y=1+(x-2)*(x-2));
	else if (x>=4)
		printf("���������YֵΪ%d\n",y=(x-2)*(x-2)+(x-1)*(x-1)*(x-1));
	
	return 0;
}

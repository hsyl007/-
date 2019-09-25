#include<stdio.h>
#include<windows.h>
int main()
{
	int n,i,N,x,flag=1,s;
	scanf("%d",&N);
	n=N=1;
	for(;flag;n++)
	{
		for(x=n,i=1&&flag;i<=N;i++)
			if((x-1)%N==0)
			{
				s=x;
				s=(s-1)/N;
				x=x-1-s;
				
			}
			else flag=0;
			if(flag) break;
			else
				flag=1;
	}
	printf("%d\n",n);
	system("pause");
	return 0;
}
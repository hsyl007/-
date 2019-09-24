/*编写程序输出个位数为6且能被3整除的N位数的个数。*/
#include<stdio.h>
#include<math.h>
#include<windows.h>

void main(){
	int i,n,m,x=0,y=0,z=0;
	scanf("%d",&m);
	for(n=0;n<m;n++)
	{
		x=x+9*pow(10,n);
		
	}
	for(n=0;n<m-1;n++)
	{
		z=z+9*pow(10,n);
		
	}
	for(i=z+1;i<=x;i++)
	{
		if(i%3==0&&i%10==6)
		{
			printf("%d ",i);
			y++;
		}
		
	}
	printf("\n个位数为6且能被3整除的N位数的个数为:%d",y);
	printf("\n");
	system("pause");
}
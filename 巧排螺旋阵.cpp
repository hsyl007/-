/*巧排螺旋阵*/
#include<stdio.h>
#include<windows.h>
#define N 100

void spiralsquare(int n)
{
	int i,j,k=n,a[N][N],b[2]={-1,0},r,s=1,t=1;
	while(s<=n*n)
	{
		for(r=0;r<2*k-1;r++)
		{
			b[r/k]=b[r/k]+t;
			a[b[0]][b[1]]=s++;
		}
		k--;
		t=-t;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
			
		}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("请输入一个数：");
	scanf("%d",&n);
	spiralsquare(n);
	system("pause");
	return 0;
}
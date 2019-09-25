/*
给定搜索范围m和n（1<m<n<20000,m、n为正整数），找出指定范围内的孪生数
*/
#include<stdio.h>
#include<windows.h>

void istwins(int m,int n){
	int i,j,s,s1,a[100],t=0;
	for(i=m;i<=n;i++){
		for(j=0;j<t;j++)
			if(i==a[j])
				i++;
			s=0;
			for(j=1;j<i;j++)
				if(i%j==0)
					s+=j;
				if(s>=m&&s<=n&&s!=i)
				{
					s1=0;
					for(j=1;j<s;j++)
						if(s%j==0)
							s1+=j;
						if(i==s1)
						{
							a[t++]=s;
							printf("%d %d\n",i,s);
						}
				}
			
	}
	if(t==0)
		printf("NONE!\n");
		
}

int main()
{
	int m,n;
	printf("请输入两个数字：\n");
	scanf("%d%d",&m,&n);
	istwins(m,n);
	system("pause");
	return 0;
}
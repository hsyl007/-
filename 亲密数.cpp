//由用户输入两个数，判断若这两个数为亲密数则输出1，否则输出0
#include<stdio.h>
#include<windows.h>
void main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int i,sum=0;
	int j,num=0;
	if(x>0&&y>0){
		for(i=1;i<x;i++){
			if(x%i==0)
				sum+=i;
		}
		for(j=1;j<y;j++){
			if(y%j==0)
				num+=j;
		}
		if(sum==y&&num==x) printf("1  %d %d",x,y);
		else printf("0");
	}
	printf("\n");
	system("pause");
}
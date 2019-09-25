/*猴子摘桃：第一天摘掉树上桃子的一半，又多摘了一个；第二天摘掉树剩下的一半又多摘了一个，。。。。。，第N天早上发现树上只有一个桃子了，编写程序计算第一天树上原有几个桃子。
*/
#include<stdio.h>
#include<windows.h>

int main(){
	int sum(int n);
	int n,y;
	printf("请输入天数N：\n");
	scanf("%d",&n);
	y=sum(n);
	printf("第一天在树上的桃子数为：%d\n",y);
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
#include<stdio.h> 
#include<windows.h>
#define N 4  /*神奇数字6174*/  
void Sort(int a[])     //对四个数字进行排序 
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
int difference(int a[])   //得到最大值与最小值的差 
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
	printf("请输入一个四位数:\n(注意输入的数字不可以全部相同哦!)\n");
	while(ans!=6174)            //当数字是6174，不再循环
	{
		if(ret==0)
		{
			ret++;
			scanf("%d",&n);       //第一次输入的
			printf("\n\n我们先把组成这个四位数的四个数字由大到小排列得到一个新的四位数，\n");
			printf("再把组成这个四位数的四个数字由小到大排列得到另一个新的四位数，\n");
			printf("用大的减去小的，再把上面两数相减所得的数字按照上面的方法再做一遍，\n");
			printf("直至两数相减所得到的数6174为止。\n\n\n");
			printf("具体计算过程如下:\n");
			while(flag)
			{
				x1 = n/1000;
				x2 = (n-1000*x1)/100;
				x3 = (n-1000*x1-100*x2)/10;
				x4 = n%10;
				if(ret==1 && (x1==x2 && x1==x3 && x1==x4 && x2==x3 && x2==x4 &&x3==x3))
					continue;    //当数字全相同的时候，不可用
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
		else      //得出最大值与最小值的差，作为n，循环
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
	printf("\n无论你输入什么样的数字不完全相同的四位数，\n最终都会回到这个神秘数字6174\n");
	system("pause");
	return 0;
} 

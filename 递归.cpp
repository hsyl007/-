#include<stdio.h>
void move(char chSour,char chDest);
void hanoi(int n,char chA,char chB,char chC);
void main()
{
	int n;
	printf("\nplease input number of the plates:");
	scanf("%d",&n);
	printf("\nMoving %d plates from A to C:",n);//调用函数计算并输出结果
	hanoi(n,'A','B','C');
}
/*
*函数名：move
*功能：将一个盘子从源座移动到目标座
*输入：char chSour（源座）
       char chDest（目标座）
*输出：无
*返回值：无
*/
void move(char chSour,char chDest)
{
	//打印移动步骤
	printf("\nMove the top plate of %c to %c",chSour,chDest);
}
/*
*函数名：hanoi
*功能：将n个盘子从源座chA移动到目标塔chC，借助于座chB
*输入：char chA，源座
       char chB，临时座
	   char chC，目标座
*输出：无
*返回值：无
*/
void hanoi(int n,char chA,char chB,char chC)
{
	//检查当前的盘子数量是否为1
	if(n==1)
		move(chA,chC);//盘子的数量为1，打印结果后，不再继续进行递归
	else //盘子数量大于1，继续进行递归过程
	{
		hanoi(n-1,chA,chC,chB);
		move(chA,chC);
		hanoi(n-1,chB,chA,chC);
	}
}
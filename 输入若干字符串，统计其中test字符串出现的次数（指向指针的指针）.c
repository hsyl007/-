
#include<alloc.h>
#include<stdio.h>
#include<string.h>

char **DefinePointerArray(int n);//创建动态字符指针数组
char *DefineCharArray(int n);//创建动态字符数组
void FreePointerArray(char **p)//释放指针数组
void FreeCharArray(char *p)//释放字符数组
void main()
{
	char  **pArray,t[30];
	int i,nCount,nLen,nTestCount=0;
	printf("请输入字符串个数：");
	scanf("%d",&nCount);
	pArray=DefinePointerArray(nCount);//创建动态指针数组，返回数组的指针
	printf("请输入字符串");
	for(i=0;i<nCount;i++)
	{
		scanf("%s",t);
		nLen=strlen(t);//将输入的字符串临时保存在数组t中
		pArray[i]=DefineCharArray(nLen+1);//定义长度为nLen+1的动态char型数组，数组首地址存入指针数组pArray[i]
		stpcpy(pArray[i],t);//将临时字符数组t里的内容拷贝到pArray[i]对应的字符数组
				
	}
	for (i=0;i<nCount;i++)//统计”test“字符串的个数
	{
		if(strcmp("test",*(pArray+i))==0)
			nTestCount++;
	}
	printf("上述字符串中共包含%d个‘test’。\n",nTestCount);
	for(i=0;i<nCount;i++)//先释放指针数组pArray[i]对应的字符数组
		FreeCharArray(pArray[i]);
	FreePointerArray(pArray);//释放指针数组pArray
	
}

char *DefinePointerArray(int n)//创建动态指针数组，返回指针数组的首地址
{
	return (char**)malloc(n*sizeof(char*));
	
}

char *DefineCharArray(int n)//创建动态字符数组，返回字符数组的首地址
{
	return (char*)malloc(n*sizeof(char));
}

void FreePointerArray(char **p)//释放动态指针数组
{
	free((void*)p);	
}

void FreeCharArray(char *p)//释放动态字符数组
{
	free((void*)p);
}

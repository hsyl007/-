
#include<alloc.h>
#include<stdio.h>
#include<string.h>

char **DefinePointerArray(int n);//������̬�ַ�ָ������
char *DefineCharArray(int n);//������̬�ַ�����
void FreePointerArray(char **p)//�ͷ�ָ������
void FreeCharArray(char *p)//�ͷ��ַ�����
void main()
{
	char  **pArray,t[30];
	int i,nCount,nLen,nTestCount=0;
	printf("�������ַ���������");
	scanf("%d",&nCount);
	pArray=DefinePointerArray(nCount);//������ָ̬�����飬���������ָ��
	printf("�������ַ���");
	for(i=0;i<nCount;i++)
	{
		scanf("%s",t);
		nLen=strlen(t);//��������ַ�����ʱ����������t��
		pArray[i]=DefineCharArray(nLen+1);//���峤��ΪnLen+1�Ķ�̬char�����飬�����׵�ַ����ָ������pArray[i]
		stpcpy(pArray[i],t);//����ʱ�ַ�����t������ݿ�����pArray[i]��Ӧ���ַ�����
				
	}
	for (i=0;i<nCount;i++)//ͳ�ơ�test���ַ����ĸ���
	{
		if(strcmp("test",*(pArray+i))==0)
			nTestCount++;
	}
	printf("�����ַ����й�����%d����test����\n",nTestCount);
	for(i=0;i<nCount;i++)//���ͷ�ָ������pArray[i]��Ӧ���ַ�����
		FreeCharArray(pArray[i]);
	FreePointerArray(pArray);//�ͷ�ָ������pArray
	
}

char *DefinePointerArray(int n)//������ָ̬�����飬����ָ��������׵�ַ
{
	return (char**)malloc(n*sizeof(char*));
	
}

char *DefineCharArray(int n)//������̬�ַ����飬�����ַ�������׵�ַ
{
	return (char*)malloc(n*sizeof(char));
}

void FreePointerArray(char **p)//�ͷŶ�ָ̬������
{
	free((void*)p);	
}

void FreeCharArray(char *p)//�ͷŶ�̬�ַ�����
{
	free((void*)p);
}

#include<stdio.h>
#include<math.h>

void insertSort(int R[],int n)//��������
{
	int i,j;
	for(i=2;i<=n;i++)
	{
		if(R[i]<R[i-1])
		{
			R[0]=R[i];//���Ƶ���ʱ��
			for(j=i-1;R[0]<R[j];j--)
			{
				R[j+1]=R[j];//��¼����
				R[j+1]=R[0];//������ȷλ��
			}
		}
	}

}


void bubbleSort(int R[],int n)//ð������
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(R[j]>R[j+1])
			{
				t=R[j];
				R[j]=R[j+1];
				R[j+1]=t;
				
				
			}
		}
	}
}

void selectSort(int R[],int n)//ѡ������
{
	int i,j,t,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(R[j]<R[k])
				k=j;
			
		}
		
		t=R[k];
		R[k]=R[i];
		R[i]=t;
		
	}
}


void main()
{
	int A[6]={7,2,11,34,10,45};
	int i=0;
	//insertSort(A,6);
	bubbleSort(A,6);
	//selectSort(A,6);
	
	for(i=1;i<=6;i++)
	{
		printf("%3d",A[i]);
	}
}

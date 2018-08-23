#include<stdio.h>
void inv1(int b[],int n)
{
	int temp, i,j,m=(n-1)/2;
	for(i=0;i<=m;i++)
	{
		j=n-1-i;
		temp=b[i];b[i]=b[j];b[j]=temp;
	}
	
}

void inv2(int *x,int n)
{
	int temp,m=(n-1)/2;
	int *p,*i,*j;
	i=x;j=x+n-1;p=x+m;
	for(;i<=p;i++,j--)
	{
		temp=*i;*i=*j;*j=temp;
	}
	
}

void inv3(int b[],int n)
{
	int temp,i,j,m=(n-1)/2;
	for(i=0;i<=m;i++)
	{
		j=n-1-i;temp=b[i];
		b[i]=b[j];b[j]=temp;
	}
	
}


void inv4(int *x,int n)
{
	int temp,m=(n-1)/2;
	int *p,*i,*j;
	i=x;j=x+n-1;p=x+m; 
	for(;i<=p;i++,j--)
	{
		temp=*i;*i=*j;
		*j=temp;
	}
	
}


//inv3, inv4 

int main()
{
	int i,*p,a[6]={1,3,4,6,7,9};
	printf("ÕÛ°ëÇ°£º\n");
	for(i=0;i<6;i++)
		printf("%3d",a[i]);
	p=a;
	inv4(p,6);
	printf("\nÕÛ°ëºó£º\n");
	for(p=a;p<a+6;p++)
		printf("%3d",*p);
	printf("\n");
	return 0;
}



/*//inv1, inv2 

int main()
{
	int i,a[6]={1,3,4,6,7,9};
	printf("ÕÛ°ëÇ°£º\n");
	for(i=0;i<6;i++)
		printf("%3d",a[i]);
	inv2(a,6);
	printf("\nÕÛ°ëºó£º\n");
	for(i=0;i<6;i++)
		printf("%3d",a[i]);
	printf("\n");
	return 0;
}*/

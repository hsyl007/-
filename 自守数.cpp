//��������ָһ������ƽ����β�����ڸ����������Ȼ�������磺252=625 762=5776   ��д��ʽ�ж��û���������Ƿ�Ϊ������ 
#include<stdio.h>
#include<windows.h>
int main(){
	long mul,number,k,ll,kk;
	scanf("%d",&number);
	for(mul=number,k=1;(mul/=10)>0;k*=10);
	kk=k*10;
	mul=0;ll=10;
	while(k>0){
		mul=(mul+(number%(k*10))*(number%ll-number%(ll/10)))%kk;
		k/=10;
		ll*=10;
	}
	if(number==mul)
		printf("%ld\n",1);
	else
		printf("%ld\n",0);
	system("pause");
	return 0;
		
}
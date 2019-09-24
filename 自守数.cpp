//自守数是指一个数的平方的尾数等于该数自身的自然数。例如：252=625 762=5776   编写程式判断用户输入的数是否为自守数 
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
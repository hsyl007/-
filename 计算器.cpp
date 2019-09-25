#include<stdio.h>
#include<windows.h>

void main(){
	double x,y;
	char c;
	while(1){
	printf("请输入需要进行的运算（格式：数字 运算符号 数字）\n");
	scanf("%lf%c%lf",&x,&c,&y);
	switch(c){
		case'+':printf("%g\n",x+y);
		break;
		case'-':printf("%g\n",x-y);
		break;
		case'*':printf("%g\n",x*y);
		break;
		case'/':if(y!=0){
			printf("%g\n",x/y);break;
		}
		else{
			printf("error\n"); break;
		}
		default:printf("error\n");break;
	}
	}
	system("pause");
}
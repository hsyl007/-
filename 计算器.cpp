#include<stdio.h>
#include<windows.h>

void main(){
	double x,y;
	char c;
	while(1){
	printf("��������Ҫ���е����㣨��ʽ������ ������� ���֣�\n");
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
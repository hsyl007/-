#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
#include<windows.h> 
char rnd() 
{ 
return 'a'+rand()%26; 
} 
int main() 
{ 
int i,j; 
srand(time(0)); //�趨��������� 
for(i=0;i<15;i++) //�趨������� 
{ 
for(j=0;j<15-i;j++) //�趨����հ��� 
{ 
printf(" "); //����հ� 
} 
for(j=0;(j+1)/2<i;j++) //�趨�����ĸ�� 
{ 
printf("%c",rnd()); //��������ĸ 
} 
printf("\n"); //������� 
} 
for(i=0;i<8;i++) //�趨���ɸ߶� 
{ 
for(j=0;j<12;j++) //�趨����λ�� 
{ 
printf(" "); //����հ� 
} 
for(j=0;j<3;j++) //�趨���ɴ�ϸ 
{ 
printf("%c",rnd()); //��������ĸ 
} 
printf("\n"); //������� 
} 
getchar(); 
system("pause");return 0; //��ͣ��Ч�� 
}  

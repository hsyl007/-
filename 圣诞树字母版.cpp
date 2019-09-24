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
srand(time(0)); //设定随机数种子 
for(i=0;i<15;i++) //设定输出行数 
{ 
for(j=0;j<15-i;j++) //设定输出空白量 
{ 
printf(" "); //输出空白 
} 
for(j=0;(j+1)/2<i;j++) //设定输出字母量 
{ 
printf("%c",rnd()); //输出随机字母 
} 
printf("\n"); //输出换行 
} 
for(i=0;i<8;i++) //设定树干高度 
{ 
for(j=0;j<12;j++) //设定树干位置 
{ 
printf(" "); //输出空白 
} 
for(j=0;j<3;j++) //设定树干粗细 
{ 
printf("%c",rnd()); //输出随机字母 
} 
printf("\n"); //输出换行 
} 
getchar(); 
system("pause");return 0; //暂停看效果 
}  

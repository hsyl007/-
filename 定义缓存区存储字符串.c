#include<stdio.h>
#include<string.h>
#define SIZE 100
char buf[SIZE];
char *p =buf;
//向buf缓冲区申请n个字节的空间
char * alloc(int n)
{
	char *begin;
//如果所申请空间没有超出范围，则修改指针返回未分配区域的首地址

	if(p+n<=buf+SIZE)
	{
		begin=p;p=p+n;
		return (begin);
		
	}
	else return (NULL);

}

void main()
{
	char *p1,*p2;int i;
	//向buf缓冲区申请4个字节的空间，将该空间的首地址返回给p1*
	p1=alloc(4);
	strcpy(p1,"123");
	//向buf缓冲区申请5个字节的空间，将该空间的首地址返回给p2*
	p2=alloc(5);
	strcpy(p2,"abcd");
	printf("buf=%p\n",buf);
	printf("p1=%p\n",p1);
	printf("p2=%p\n",p2);
	puts(p1);puts(p2);
	for(i=0;i<9;i++)
	printf("%c",buf[i]);
	
}

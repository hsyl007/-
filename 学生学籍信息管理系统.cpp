#include<stdio.h>
#include<conio.h>
#include<windows.h>

struct student                                      //学生结构体，定义基本变量
{
	 char name[50];
	 char id[50];
	 float score[3];
	 float sum;
	 float average;
	 int number;
};


struct student s[100];								//学生结构体数组
int n=0;                                            //学生总数


void look();                                        //遍历
void load();										//加载
void input();										//向数组中录入信息
void change(int);									//更改个人信息
void find();										//查找
void save();										//保存
void sort();										//排序
void del(int);										//删除，需以数组下标为形参
void print(int);									//输出学生信息
getch(void);                                        //暂停

/************************************主函数*************************************/
int main()
{
	char c;
	FILE *fp;
	fp=fopen("D:\\学生信息管理系统.dat","a");       //将会建立一个新文件
	load();
	fclose(fp);                                
	while(1)
	{
		printf("\n");
		printf("*************欢迎使用学生信息管理系统！*************\n");	
		printf("***    1506033                          黄成杰   ***\n");
		printf("***                  1.录入成绩                  ***\n");										
		printf("***                  2.查询成绩                  ***\n");										
		printf("***                  3.  排序                    ***\n");
		printf("***                  4.  退出                    ***\n");
		printf("****************************************************\n");
		printf("\n");
		printf("\n请输入选择项：");
		scanf(" %c",&c);
		system("cls");                                             //清屏函数
		getchar();                                 
		switch(c)
		{
		case '1':input();break;
		case '2':find();break;
		case '3':sort();break;
		case '4':save();
			printf("谢谢使用");
			return 0;
		default:printf("选择错误，请重新选择。\n");break;
		}
	  
	}
}
/******************************录入成绩****************************/

void input()
{
	printf("请输入姓名:");
	gets(s[n].name);                                                    //通过gets语句读入外来输入数据
	printf("请输入学号:");
	gets(s[n].id);
	printf("请分别输入语文 数学 英语的成绩:");
	scanf("%f %f %f",&s[n].score[0],&s[n].score[1],&s[n].score[2]);     //用scanf实现了各科成绩的录入
	s[n].sum=s[n].score[0]+s[n].score[1]+s[n].score[2];
	s[n].average=s[n].sum/3;
	n++;											                
	printf("录入成功！\n");
}
/************************修改成绩***********************************/

void change(int i)
{
	int k;
	float f;
	char c[50];                                     //用来储存用户输入的字符串
	printf("1-姓名 \n2-学号 \n3-语文 \n4-数学 \n5-英语 \n");	
	printf("请选择改变项目：");
	scanf("%d",&k);
	getchar();
	if(k==1)										//更改姓名
	{
		printf("请输入修改值：");
		scanf("%s",&c);
		strcpy(s[i].name,c);
		printf("\n");
	}
    else if(k==2)									//更改学号
	{
		printf("请输入修改值：");
		scanf("%s",&c);
	    strcpy(s[i].id,c);
		printf("\n");
	}
	else if(k==3||k==4||k==5)                       //更改成绩
	{
		printf("请输入修改值：");
		scanf("%f",&f);
		s[i].score[k-3]=f;
		s[i].sum=s[i].score[1]+s[i].score[0]+s[i].score[2];			//改了成绩以后总分和平均分也要修改
		s[i].average=s[i].sum/3;
		printf("\n");
	}
   	else
	{
	    printf("错误!\n\n");
	    return;
	}
	printf("修改成功！\n\n");
	printf("修改后的值为：\n");                     //确认修改成功，安全的进入下一步
	print(i);
	getch();									
	return;
}
/**************************搜索信息*******************/

void find()
{
	int i,n;
	char a[100];
	printf("请选择：\n");
	printf("1-查询单人成绩\n");
	printf("2-遍历所有成绩\n");
	printf("3-显示不及格的学生\n");
    printf("请输入选择:");
	scanf("%d",&n);
	fflush(stdin);
	if(n==2)
	{
		look();                                     //调用一个自定义Look函数来执行查看的命令
		return;
	}
	else if(n==3)									   
	{
		int i,j,sum=0;								//i作为数组下标，sum表示不及格的人数
		printf("请选择具体科目:\n");
		printf("1-语文\n");
		printf("2-数学\n");
		printf("3-英语\n");
		printf("4-任意科目\n");
		printf("请输入选择：");
		scanf("%d",&j);
		if(j<4)               
		{	
			for(i=0;i<n;i++)
			{
				if(s[i].score[j-1]<60)
				{
					print(i);
					sum++;
				}
			}
			printf("共有%d个学生不及格。\n",sum);
		}
		else if(j==4)                          
		{
			for(i=0;i<n;i++)
				for(j=0;j<3;j++)
				{
					if(s[i].score[j]<60)
					{
						print(i);
						sum++;
						break;
					}
				}
			printf("共有%d个学生不及格。\n",sum);
		}
		else
		{
			printf("输入有误！");
			return ;
		}
		getch();
		return;
	}
	else if(n!=1)
	{
		printf("输入错误！\n");
		return;
	}
	while(1)												//个人信息查询
	{
		printf("请输入学号或姓名：");                      
   		gets(a);
		if(strcmp(a,"\0")==0)
			printf("输入错误，请重新输入!\n");
		else
			break;
	}
    printf("\n");
	if(a[1]<='9'&&a[1]>='0')								//判断一下输入的是什么
		for(i=0;i<=n;i++)
		{
			if(strcmp(s[i].id,a)==0)
				break;
			if(i==n)
			{
				printf("查无此号！\n");
				return;
			}
		}
	else
		for(i=0;i<=n;i++)
		{
			if(strcmp(s[i].name,a)==0)
				break;
			if(i==n)
			{
				printf("查无此号！\n");
				return;
			}
		}
	print(i);
	getch();
	while(1)
	{
		printf("请选择下一步操作：\n");
		printf("1-修改\n");
		printf("2-删除\n");
		printf("3-返回主菜单\n");
		printf("请输入选项：");
		scanf("%d",&n);
		switch(n)

		{
		case 1:change(i);return;
		case 2:del(i);return;
		case 3:return;
		default:break;
		}
	}
	printf("\n\n");
}

void load()																	//以只读形式打开文件
{
	FILE *fp;
	printf("文件打开中...\n\n");
	if((fp=fopen("D:\\学生信息管理系统.dat","rb"))==NULL)					//文件打开失败
	{
		printf("文件无法打开\n");
		return;
	}
	printf("打开成功！\n");

	fclose(fp);
	printf("系统有%d个学生登记!\n\n",n);
}
/**************************存储信息*******************/
void save()																	//以只写形式保存文件
{
	int i;
	FILE *fp;
	printf("文件正在保存...\n\n");
	if((fp=fopen("D:\\学生信息管理系统.dat","wb+"))==NULL)					//文件保存失败
	{
		printf("文件保存失败！\n");
		return;
	}
	for(i=0;i<n;i++)
		fwrite(&s[i],sizeof(s[i]),1,fp);
	printf("文件已保存！\n\n");
	fclose(fp);
	return;
}

void look()
{
	int i;
	for(i=0;i<n;i++)
		print(i);
	printf("\n");
	getch();
}
/**************************排序*******************/
void sort()
{
	struct student stu;											//建立一个中间结构体变量
	int n,i,j;
	while(1)
	{
		printf("请选择排序标准：\n");
		printf("1.语文\n");
		printf("2.数学\n");
		printf("3.英语\n");
		printf("4.总分\n");
		printf("请输入选择：");
		scanf("%d",&n);
		if(n<4)											
		{
			for(i=0;i<n;i++)								
				for(j=0;j<n-i;j++)
					if(s[j].score[n-1]<s[j+1].score[n-1])
					{
						stu=s[j];
						s[j]=s[j+1];
						s[j+1]=stu;
					}	
			break;
		}
		else if(n==4)
		{
			for(i=0;i<n;i++)									
				for(j=0;j<n-i;j++)
					if(s[j].sum<s[j+1].sum)
					{	
						stu=s[j];
						s[j]=s[j+1];
						s[j+1]=stu;
					}	
			break;
		}
		else
			printf("输入错误，请重新输入！\n");
	}
	printf("排序完成\n\n");
	printf("请选择下一步：\n");
	printf("1-遍历\n");
	printf("2-返回主菜单\n");
	printf("请输入选择:");
	scanf("%d",&n);
	switch(n)
	{
	case 1:look();return;
	case 2:return;
	}
}

void del(int i)
{
	char c;
	printf("请按Y（y                    ）来确认此操作，或按其他任意键返回主菜单\n");				
    fflush(stdin);
	c=getchar();
	if((c!='y')&&(c!='Y'))														
		return;
	for(i=0;i<n;i++)																//因为I有值了，所以省略初始条件
		s[i]=s[i+1];
	n--;																	//学生总数减一
	printf("该生已删除！\n");
	getch();
}

void print(int i)
{
	printf("姓名：%s\n",s[i].name);
	printf("学号：%s\n",s[i].id);
	printf("语文：%g\n",s[i].score[0]);
	printf("数学：%g\n",s[i].score[1]);
	printf("英语：%g\n",s[i].score[2]);
	printf("总分：%g\n",s[i].sum);
	printf("平均分：%g\n",s[i].average);
	printf("名次：%d\n",i+1);
	printf("\n");
}
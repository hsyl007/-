#include<stdio.h>
typedef struct{
	int no;
	int age;
	
}student;
student st;
void main()
{
	int i;
	FILE *fp;
	if((fp=fopen("student.dat","wb+"))==NULL)
	{
		printf("打开文件失败！\n");
		exit(0);
		
	}
	
	for(i=0;i<3;i++)
	{
		printf("输入第%d个学生的信息：\n",i+1);
		scanf("%d%d",&st.no,&st.age);
		fwrite(&st,sizeof(st),1,fp);
		
	}
	
	rewind(fp);
	while(!feof(fp))
	{
		fread(&st,sizeof(st),1,fp);
		if(!feof(fp))
			printf("学号：%d,年龄：%d\n",st.no,st.age);
		
	}
	
	fclose(fp);
}

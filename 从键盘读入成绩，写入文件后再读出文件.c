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
		printf("���ļ�ʧ�ܣ�\n");
		exit(0);
		
	}
	
	for(i=0;i<3;i++)
	{
		printf("�����%d��ѧ������Ϣ��\n",i+1);
		scanf("%d%d",&st.no,&st.age);
		fwrite(&st,sizeof(st),1,fp);
		
	}
	
	rewind(fp);
	while(!feof(fp))
	{
		fread(&st,sizeof(st),1,fp);
		if(!feof(fp))
			printf("ѧ�ţ�%d,���䣺%d\n",st.no,st.age);
		
	}
	
	fclose(fp);
}

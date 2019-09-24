#include<stdio.h>
#include<conio.h>
#include<windows.h>

struct student                                      //ѧ���ṹ�壬�����������
{
	 char name[50];
	 char id[50];
	 float score[3];
	 float sum;
	 float average;
	 int number;
};


struct student s[100];								//ѧ���ṹ������
int n=0;                                            //ѧ������


void look();                                        //����
void load();										//����
void input();										//��������¼����Ϣ
void change(int);									//���ĸ�����Ϣ
void find();										//����
void save();										//����
void sort();										//����
void del(int);										//ɾ�������������±�Ϊ�β�
void print(int);									//���ѧ����Ϣ
getch(void);                                        //��ͣ

/************************************������*************************************/
int main()
{
	char c;
	FILE *fp;
	fp=fopen("D:\\ѧ����Ϣ����ϵͳ.dat","a");       //���Ὠ��һ�����ļ�
	load();
	fclose(fp);                                
	while(1)
	{
		printf("\n");
		printf("*************��ӭʹ��ѧ����Ϣ����ϵͳ��*************\n");	
		printf("***    1506033                          �Ƴɽ�   ***\n");
		printf("***                  1.¼��ɼ�                  ***\n");										
		printf("***                  2.��ѯ�ɼ�                  ***\n");										
		printf("***                  3.  ����                    ***\n");
		printf("***                  4.  �˳�                    ***\n");
		printf("****************************************************\n");
		printf("\n");
		printf("\n������ѡ���");
		scanf(" %c",&c);
		system("cls");                                             //��������
		getchar();                                 
		switch(c)
		{
		case '1':input();break;
		case '2':find();break;
		case '3':sort();break;
		case '4':save();
			printf("ллʹ��");
			return 0;
		default:printf("ѡ�����������ѡ��\n");break;
		}
	  
	}
}
/******************************¼��ɼ�****************************/

void input()
{
	printf("����������:");
	gets(s[n].name);                                                    //ͨ��gets������������������
	printf("������ѧ��:");
	gets(s[n].id);
	printf("��ֱ��������� ��ѧ Ӣ��ĳɼ�:");
	scanf("%f %f %f",&s[n].score[0],&s[n].score[1],&s[n].score[2]);     //��scanfʵ���˸��Ƴɼ���¼��
	s[n].sum=s[n].score[0]+s[n].score[1]+s[n].score[2];
	s[n].average=s[n].sum/3;
	n++;											                
	printf("¼��ɹ���\n");
}
/************************�޸ĳɼ�***********************************/

void change(int i)
{
	int k;
	float f;
	char c[50];                                     //���������û�������ַ���
	printf("1-���� \n2-ѧ�� \n3-���� \n4-��ѧ \n5-Ӣ�� \n");	
	printf("��ѡ��ı���Ŀ��");
	scanf("%d",&k);
	getchar();
	if(k==1)										//��������
	{
		printf("�������޸�ֵ��");
		scanf("%s",&c);
		strcpy(s[i].name,c);
		printf("\n");
	}
    else if(k==2)									//����ѧ��
	{
		printf("�������޸�ֵ��");
		scanf("%s",&c);
	    strcpy(s[i].id,c);
		printf("\n");
	}
	else if(k==3||k==4||k==5)                       //���ĳɼ�
	{
		printf("�������޸�ֵ��");
		scanf("%f",&f);
		s[i].score[k-3]=f;
		s[i].sum=s[i].score[1]+s[i].score[0]+s[i].score[2];			//���˳ɼ��Ժ��ֺܷ�ƽ����ҲҪ�޸�
		s[i].average=s[i].sum/3;
		printf("\n");
	}
   	else
	{
	    printf("����!\n\n");
	    return;
	}
	printf("�޸ĳɹ���\n\n");
	printf("�޸ĺ��ֵΪ��\n");                     //ȷ���޸ĳɹ�����ȫ�Ľ�����һ��
	print(i);
	getch();									
	return;
}
/**************************������Ϣ*******************/

void find()
{
	int i,n;
	char a[100];
	printf("��ѡ��\n");
	printf("1-��ѯ���˳ɼ�\n");
	printf("2-�������гɼ�\n");
	printf("3-��ʾ�������ѧ��\n");
    printf("������ѡ��:");
	scanf("%d",&n);
	fflush(stdin);
	if(n==2)
	{
		look();                                     //����һ���Զ���Look������ִ�в鿴������
		return;
	}
	else if(n==3)									   
	{
		int i,j,sum=0;								//i��Ϊ�����±꣬sum��ʾ�����������
		printf("��ѡ������Ŀ:\n");
		printf("1-����\n");
		printf("2-��ѧ\n");
		printf("3-Ӣ��\n");
		printf("4-�����Ŀ\n");
		printf("������ѡ��");
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
			printf("����%d��ѧ��������\n",sum);
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
			printf("����%d��ѧ��������\n",sum);
		}
		else
		{
			printf("��������");
			return ;
		}
		getch();
		return;
	}
	else if(n!=1)
	{
		printf("�������\n");
		return;
	}
	while(1)												//������Ϣ��ѯ
	{
		printf("������ѧ�Ż�������");                      
   		gets(a);
		if(strcmp(a,"\0")==0)
			printf("�����������������!\n");
		else
			break;
	}
    printf("\n");
	if(a[1]<='9'&&a[1]>='0')								//�ж�һ���������ʲô
		for(i=0;i<=n;i++)
		{
			if(strcmp(s[i].id,a)==0)
				break;
			if(i==n)
			{
				printf("���޴˺ţ�\n");
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
				printf("���޴˺ţ�\n");
				return;
			}
		}
	print(i);
	getch();
	while(1)
	{
		printf("��ѡ����һ��������\n");
		printf("1-�޸�\n");
		printf("2-ɾ��\n");
		printf("3-�������˵�\n");
		printf("������ѡ�");
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

void load()																	//��ֻ����ʽ���ļ�
{
	FILE *fp;
	printf("�ļ�����...\n\n");
	if((fp=fopen("D:\\ѧ����Ϣ����ϵͳ.dat","rb"))==NULL)					//�ļ���ʧ��
	{
		printf("�ļ��޷���\n");
		return;
	}
	printf("�򿪳ɹ���\n");

	fclose(fp);
	printf("ϵͳ��%d��ѧ���Ǽ�!\n\n",n);
}
/**************************�洢��Ϣ*******************/
void save()																	//��ֻд��ʽ�����ļ�
{
	int i;
	FILE *fp;
	printf("�ļ����ڱ���...\n\n");
	if((fp=fopen("D:\\ѧ����Ϣ����ϵͳ.dat","wb+"))==NULL)					//�ļ�����ʧ��
	{
		printf("�ļ�����ʧ�ܣ�\n");
		return;
	}
	for(i=0;i<n;i++)
		fwrite(&s[i],sizeof(s[i]),1,fp);
	printf("�ļ��ѱ��棡\n\n");
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
/**************************����*******************/
void sort()
{
	struct student stu;											//����һ���м�ṹ�����
	int n,i,j;
	while(1)
	{
		printf("��ѡ�������׼��\n");
		printf("1.����\n");
		printf("2.��ѧ\n");
		printf("3.Ӣ��\n");
		printf("4.�ܷ�\n");
		printf("������ѡ��");
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
			printf("����������������룡\n");
	}
	printf("�������\n\n");
	printf("��ѡ����һ����\n");
	printf("1-����\n");
	printf("2-�������˵�\n");
	printf("������ѡ��:");
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
	printf("�밴Y��y                    ����ȷ�ϴ˲�����������������������˵�\n");				
    fflush(stdin);
	c=getchar();
	if((c!='y')&&(c!='Y'))														
		return;
	for(i=0;i<n;i++)																//��ΪI��ֵ�ˣ�����ʡ�Գ�ʼ����
		s[i]=s[i+1];
	n--;																	//ѧ��������һ
	printf("������ɾ����\n");
	getch();
}

void print(int i)
{
	printf("������%s\n",s[i].name);
	printf("ѧ�ţ�%s\n",s[i].id);
	printf("���ģ�%g\n",s[i].score[0]);
	printf("��ѧ��%g\n",s[i].score[1]);
	printf("Ӣ�%g\n",s[i].score[2]);
	printf("�ܷ֣�%g\n",s[i].sum);
	printf("ƽ���֣�%g\n",s[i].average);
	printf("���Σ�%d\n",i+1);
	printf("\n");
}
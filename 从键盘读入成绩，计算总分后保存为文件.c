#include<stdio.h>
void main()
{
	FILE *fp;
	float fEnglish,fMath,fComputer,fTotal;
	char Name[20];
	int i;
	if((fp=fopen("student.dat","w"))==NULL)
	{
		printf("���ļ�ʧ��!\n");
		exit(0);
		
	}
	printf("����\tӢ��\t��ѧ\t�����\n");
	for(i=0;i<3;i++)
	{
		scanf("%s%f%f%f",Name,&fEnglish,&fMath,&fComputer);
		fTotal=fEnglish+fMath+fComputer;
		fprintf(fp,"%s\t%2.1f\t%2.1f\t%2.1f\t%2.1f\n",Name,fEnglish,fMath,fComputer,fTotal);
		
	}
	fclose(fp);
	
	if((fp=fopen("student.dat","r"))==NULL)
	{
		printf("���ļ�ʧ��!\n");
		exit(0);
	}
	
	printf("����\tӢ��\t��ѧ\t�����\n");
	while(!feof(fp))
	{
		fscanf(fp,"%s%f%f%f%f",Name,&fEnglish,&fMath,&fComputer,&fTotal);
		printf("%s\t%2.2f\t%2.2f\t%2.2f\t%2.2f\n",Name,fEnglish,fMath,fComputer,fTotal);
		
	}
	fclose(fp);

}

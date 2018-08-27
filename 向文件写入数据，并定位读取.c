#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	char t[20];
	char s[]="www.CLanguage.cn";
	if((fp=fopen("tmp.dat","wb+"))==NULL)
	{
		printf("打开文件失败!\n");
		exit(0);
		
	}
	
	fwrite(s,strlen(s),1,fp);
	fseek(fp,4L,0);
	fread(t,9,1,fp);
	t[9]='\0';
	printf("\n%s",t);
	fclose(fp);
}

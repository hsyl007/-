/*Filename:超市收银系统
Author：Hsyl007
Discription：从文件读取商品编号及对应单价信息，并将消费记录保存在另一个文件中 

*/

#include<stdio.h>
#include<windows.h>
struct ExSample
{
	int Number;
	float unitprice;
}ex[3];

void load()
{
	FILE *fp;
	int i;
	if((fp=fopen("goods_dat","r"))==NULL)
	{
		printf("cannot open the file \n");
		return;
		
	}
	for(i=0;i<3;i++)
	{
		if(fread(&ex[i],sizeof(struct ExSample),1,fp)!=1)
		{
			if(feof(fp))
			{
				fclose(fp);
				return;
				
			}
			printf("file read error \n");
			
		}
		fclose(fp);
	}
	
	void save()
	{
		FILE *fp1;
		int j,k;
		float result[3];
		if((fp1=fopen("result","w"))==NULL)
		{
			printf("cannot open file \n");
			return;
			
		}
		for (j=0;j<3;j++)
			if(fwrite(&result[j],1,1,fp1)!=1)
				printf("file write error \n");
			fclose(fp1);
			
	}
	
	
	int main()
	{
		float quantity,sumprice=0,allprice=0;
		load();
		printf("****************************************");
		printf("The Program of the supermarket checking \n");
		printf("Input the quantity\n");
		scanf("%f",quantity);
		int k;
		for(k=0;k<3;k++)
		{
			sumprice=quantity*ex[i].unitprice;
			allprice+=sumprice;
			printf("the sumprice is %f",sumprice);
			printf("the allprice is %f",allprice);
		}
		save();
		return 0;
	}	
}

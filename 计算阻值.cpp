#include 
void main()
{
float R1,R2;
printf("���������������ֵ,�Կո�����:\n");
scanf("%f %f",&R1,&R2);
if(R1==0 || R2==0){
printf("�������ܻ���ɶ�·,��ֵΪ0\n");
printf("��������ֵ:%0.2f\n",R1+R2);
return;
}
printf("��������ֵ:%0.2f\n",getCRValue(R1,R2));
printf("��������ֵ:%0.2f\n",getBRValue(R1,R2));
}
float getBRValue(float R1,float R2){
return (R1+R2)/(R1*R2)
}
float getCRValue(float R1,float R2){
return R1+R2;
} 
#include 
void main()
{
float R1,R2;
printf("请输入两个电阻的值,以空格区分:\n");
scanf("%f %f",&R1,&R2);
if(R1==0 || R2==0){
printf("并联可能会造成短路,阻值为0\n");
printf("串联后阻值:%0.2f\n",R1+R2);
return;
}
printf("串联后阻值:%0.2f\n",getCRValue(R1,R2));
printf("并联后阻值:%0.2f\n",getBRValue(R1,R2));
}
float getBRValue(float R1,float R2){
return (R1+R2)/(R1*R2)
}
float getCRValue(float R1,float R2){
return R1+R2;
} 
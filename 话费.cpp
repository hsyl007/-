#include<iostream>
using namespace std;

int main()
{
	int call,sms,mb;
	double cost=0,callcost=0,smscost=0,mbcost=0;
	cout<<"ͨ��ʱ����";
	cin>>call;
	cout<<"��������";
	cin>>sms;
	cout<<"������";
	cin>>mb;
	if(call>200)
		callcost=(call-200)*0.2;
	if(sms>100)
		smscost=(sms-100)*0.1;
	if(mb>2*1024)
		mbcost=(mb-2*1024)*0.1;
	cost=49+callcost+smscost+mbcost;
	if(cost>49)
		cout<<"�����ײͷ���Ϊ��"<<callcost+smscost+mbcost<<endl;
	else
		cout<<"δ�����ײ�������"<<endl;
	cout<<"�ܷ���Ϊ��"<<cost<<endl;
	return 0;
}

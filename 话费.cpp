#include<iostream>
using namespace std;

int main()
{
	int call,sms,mb;
	double cost=0,callcost=0,smscost=0,mbcost=0;
	cout<<"通话时长：";
	cin>>call;
	cout<<"短信数：";
	cin>>sms;
	cout<<"流量：";
	cin>>mb;
	if(call>200)
		callcost=(call-200)*0.2;
	if(sms>100)
		smscost=(sms-100)*0.1;
	if(mb>2*1024)
		mbcost=(mb-2*1024)*0.1;
	cost=49+callcost+smscost+mbcost;
	if(cost>49)
		cout<<"超出套餐费用为："<<callcost+smscost+mbcost<<endl;
	else
		cout<<"未超出套餐用量。"<<endl;
	cout<<"总费用为："<<cost<<endl;
	return 0;
}

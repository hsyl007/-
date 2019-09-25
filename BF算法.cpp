#include<iostream>
#include<string>
using namespace std;
int BF(string s1,string s2,int pos)
{
	int i=pos-1;
	int j=0;
	while(i<s1.length()&&j<s2.length())
	{
		if(s1[i]==s2[j])
		{
			i++;
			j++;
		}
		else
		{
			i=i-j+2;
		j=1;
		}
	}
	if(j>=s2.length())
		return i-s2.length();
		return 0;
}
int main()
{
string s1="howareyoumyson!";
string s2="myson!";
int pos;
cin>>pos;
	cout<<BF(s1,s2,pos);
	return 0;
}
#include<iostream.h>
#include<string.h>

using namespace std;
class student
{
public:
	string Id;
	string Name;
	double Score[3];
	double Average;
	double Sum;
};

void main()
{
	Student s;
	s.Id = "0901";
	s.Name = "Keroro";
	s.Score [0] = 95.0;
	s.Score [1] = 90.0;
	s.Score [2] = 85.0;
	s.Average =(s.Score [0]+s.Score [1]+s.Score [2])/3.0;
	s.Sum =s.Score [0]+s.Score [1]+s.Score [2];
	cout<<"平均成绩为："<<s.Average <<endl;
	cout<<"总成绩为"<<s.Sum<<endl;

}

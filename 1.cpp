#include<iostream>
using namespace std;
class student
{
	public:
		int roll;
		char name[20];
};
int main()
{
	student s;
	cout<<"enter the value\n";
	cin>>s.roll;
	cin>>s.name;
	cout<<"your roll is="<<s.roll<<endl;
	cout<<"your name is ="<<s.name<<endl;
}

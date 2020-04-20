#include<iostream>
#include<string.h>
using namespace std;
class student 
{
	private:
		int roll;
		char name[20];
	public:
		void read()
		{
			cout<<"enter the value\n";
			cin>>roll;
			cin>>name;
		}
	
		void read(int x,char *y)
		{
			roll=x;
			strcpy(name,y);
		}
		void read(int a)
		{
			 a=a+1;
			 roll=a;
		}
		void write()
		{
			cout<<roll<<endl;
			cout<<name<<endl;
		}
	
};
int main()
{
	student s;
	s.read();
	s.write();
	s.read(12,"dad");
	s.write();
	s.read(3);
	s.write();
	s.write();
	
	
}



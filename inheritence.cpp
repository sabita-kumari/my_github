#include<iostream>
#include<stdlib.h>
using namespace std;
class address
{
	public:
		char housename[20];
		char roadno[10];
		char dist[20];
		char locality[20];
		char state[20];
		long int cellno;
		char email[20];

	public:
		void read()
		{
			cout<<"enter the value\n";
			cin>>housename;
			cin>>roadno;
			cin>>dist;
			cin>>locality;
			cin>>state;
			cin>>cellno;
			cin>>email;
		}
		void show()
		{
			cout<<housename<<endl;
			cout<<roadno<<endl;
			cout<<dist<<endl;
			cout<<locality<<endl;
			cout<<state<<endl;
			cout<<cellno<<endl;
			cout<<email<<endl;
		}
};
class student
{
	private:
		int roll;
		char name[20];
	public:
		address a;
		void read()
		{
			cout<<"enter valu for std\n";
			cin>>roll;
			cin>>name;
			cin>>a.cellno;
		}
		void show()
		{
			cout<<roll<<endl;
			cout<<name<<endl;
			cout<<a.cellno<<endl;
		}
};
int main()
{
 student s;
 s.read();
 s.show();
 s.a.read();
 s.a.show();
}


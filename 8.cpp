#include<iostream>
using namespace std;
class sum 
{
	private:
		int a;
		int b;
		int c;
	public:
		void read()
		{
			cout<<"enter the value\n";
			cin>>a;
			cin>>b;
			cin>>c;
		}
		
		void operator -()
		{

			a=-a;
			b=b*c;
			c=a+c;
		}

		void write()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
			cout<<endl;
		}
};

int main()
{
	sum s;
	s.read();
	s.write();
	-s;
	s.write();
	-s;
	s.write();
	-s;
	s.write();

}



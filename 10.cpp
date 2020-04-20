#include<iostream>
using namespace std;
class binary
{
	private:
		int a;
		float b;
		int c;
	public:
		void read()
		{
			cout<<"enter the value\n";
			cin>>a;
			cin>>b;
			cin>>c;
		}
		binary operator -(binary p)
		{
			binary q;
			q.a=p.a-p.b;
			q.b=p.b-a;
			q.c=c-p.c;
			return q;
		}


		void write()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
		}
};
int main()
{
	binary x;
	x.read();
	binary y;
	y.read();
	binary z;
	z=x-y;
	z.write();
}


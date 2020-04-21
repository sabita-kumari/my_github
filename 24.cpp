#include<iostream>
using namespace std;
int main()
{
	float b;
	string a;
	cout<<"enter the string\n";
	cin>>a;
	cout.width(10);
	cout<<a<<endl;
	cout.fill('*');
	cout.width(15);
	cout<<a<<endl;
	cout<<"enter the value for float\n";
	cin>>b;
	cout.precision(3);
	cout<<b<<endl;


}


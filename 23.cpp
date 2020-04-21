#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char a[20];
	float b;
	cout<<"enter the character\n";
	cin>>a;
        cout<<setw(20)<<a<<endl;
	cout<<setw(20)<<setfill('%')<<a<<endl;
	cout<<"enter the float value\n";
	cin>>b;
	cout<<"value upto precision of five is ";
	cout<<setprecision(5)<<b<<endl;
	
}	

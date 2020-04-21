#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        char name[30];
        int roll;
        int age,i;
        char dept[10];
        char mob[10];

        ifstream a;
        a.open("studentinfo.txt",ios::in);
        while(!a.eof())
        {
                
                a>>name;
                cout<<name<<"\t";

                
                a>>roll;
                cout<<roll<<"\t";

                a>>age;
                cout<<age<<"\t";

               
                a>>dept;
                cout<<dept<<"\t";

               
                a>>mob;
                cout<<mob<<endl;

        }
	a.close();
}

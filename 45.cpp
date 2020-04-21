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

        ofstream a;
        a.open("studentinfo.txt",ios::app);
        for(i=0;i<2;i++)
        {
                cout<<"enter name\n";
                cin>>name;
                a<<name<<"\t";

                cout<<"enter roll\n";
                cin>>roll;
                a<<roll<<"\t";

                cout<<"enter age\n";
                cin>>age;
                a<<age<<"\t";

                cout<<"enter department\n";
                cin>>dept;
                a<<dept<<"\t";

                cout<<"enter mobile number\n";
                cin>>mob;
                a<<mob<<endl;

        }
}

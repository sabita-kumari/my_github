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
        ofstream b;
        a.open("studentinfo.txt",ios::in);
        b.open("studentout.txt",ios::app);
        while(!a.eof())
        {

                a>>name;
                b<<name<<"\t";


                a>>roll;
                b<<roll<<"\t";

                a>>age;
                b<<age<<"\t";


                a>>dept;
                b<<dept<<"\t";


                a>>mob;
                b<<mob<<endl;

        }
        a.close();
	b.close();
};

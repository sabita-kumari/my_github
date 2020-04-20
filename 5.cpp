#include<iostream>
#include<string.h>
using namespace std;
class student
{
        private:
                int stud_roll;
                char stud_name[20];
        public:
		student(int x,char y[20])
		{
			stud_roll=x;
			strcpy(stud_name,y);
		}

                void read()
                {
                        cout<<"enter the value\n";
                        cin>>stud_roll;
                        cin>>stud_name;
                }
                  void write()
                {
                        cout<<stud_roll<<"\n";
                        cout<<stud_name<<"\n";
                }


};
int main()
{
        student x(3,"sda");
       // x.read();
        x.write();

}


#include<iostream>
#include<string.h>
using namespace std;
class student
{
        private:
                int stud_roll;
                char stud_name[20];
        public:
		student()
		{
			stud_roll=1;
			stud_name[20];
			strcpy(stud_name,"abc");
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
        student x;
       x.read();
       x.write();

}


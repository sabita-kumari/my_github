#include<iostream>
#include<string.h>
using namespace std;
class student
{
        public:
        int std_roll;
        char std_name[20];
        public:

        student(int x,char *y)
        {
                std_roll=x;
                strcpy(std_name,y);
        }
       student(int a)
       {
	       std_roll=a;
       }
       student()
       {
	       std_roll=30;
	       strcpy(std_name,"abc");
       }
       void write()
       {
	       cout<<std_roll<<endl;
	       cout<<std_name<<endl;
       }

	       
};	

int main()
{
	student s,s1(0),s2(1,"sah");
	s.write();
	s1.write();
	s2.write();
	

}


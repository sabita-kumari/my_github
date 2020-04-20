#include<iostream>
using namespace std;
class student
{
        private:
                int stud_roll;
                char stud_name[20];
        public:

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


}s;//global object
int main()
{
        student s1;//local object
	s1.read();
	s1.write();
        s.read();
        s.write();

}


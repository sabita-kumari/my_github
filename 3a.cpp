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


};
int main()
{
        student x;
        x.read();
        x.write();

}


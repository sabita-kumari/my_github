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
                        cout<<stud_roll<<"\n";
                        cout<<stud_name<<"\n";
                }
                void write()
                {
                        cout<<"enter the value\n";
                        cin>>stud_roll;
                        cin>>stud_name;
                }

};
int main()
{
        student x;
        x.write();
        x.read();

}


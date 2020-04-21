#include<iostream>
#include<string.h>
using namespace std;
class student
{
        private:
                //non inheritable member
                int roll;
                char name[20];
        public:
                void read() //inheritable member
                {
                        cout<<"enter the roll and name\n";
                        cin>>roll;
                        cin>>name;
                }
                void write()
                {
                        cout<<roll<<endl;
                        cout<<name<<endl;
                }

};
class exam:private student
{
        private:
                int eid;
        public:
                void get()
                {
                         read();
                         cout<<"enter the eid\n";
                         cin>>eid;
                }
                void put()
                {
                        write();
                        cout<<eid<<endl;
                }
};
class department:private student
{
        private:
                int dept_id;
                char dept_name[20];
        public:
                void get1()//inheritable member
                {
                        read();
                        cout<<"enter valeu for deptid and deptname\n";
                        cin>>dept_id;
                        cin>>dept_name;
                }
                void put1()
                {
                        write();
                        cout<<dept_id<<endl;
                        cout<<dept_name<<endl;
                }
};

int main()
{
        department d;
        
        d.get1();
        d.put1();
        exam e;
        
        e.get();
        e.put();

}

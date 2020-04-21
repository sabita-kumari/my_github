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
                        cout<<"enter the value\n";
                        cin>>roll;
                        cin>>name;
                }
                void write()
                {
                        cout<<roll<<endl;
                        cout<<name<<endl;
                }

};
class exam
{
        private:
                int eid;
        public:
                void get()
                {


                         cout<<"enter the eid\n";
                         cin>>eid;
                }
                void put()
                {
                                                                                                                   
			
                        cout<<eid<<endl;
                }
};
class department:private student,public exam
{
        private:
                int dept_id;
                char dept_name[20];
        public:
                void get1()//inheritable member
                {

                        read();//derived private member 
                        
                        cout<<"enter valeu for dept\n";
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
	d.get();
        d.put1();
	d.put();
}





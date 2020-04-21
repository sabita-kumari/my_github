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
                        cout<<"enter the roll\n";
                        cin>>roll;
			cout<<"enter the name\n";
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
                char eid[20];
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
class department:protected student,protected exam
{
        private:
                char dept_id[10];
                char dept_name[20];
        public:
                void get1()//inheritable member
                {
			read();
			get();
                                           
                        cout<<"enter valeu for department id \n";
                        cin>>dept_id;
			cout<<"enter the value for department name\n";
                        cin>>dept_name;
                }
                void put1()
                {
			write();
			put();
                        cout<<dept_id<<endl;
                        cout<<dept_name<<endl;
                }
};

int main()
{
        department d;

        d.get1();
        d.put1();
}




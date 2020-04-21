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
class exam:public student
{
        private:
                int eid;
        public:
                void get()
                {
                        // read();
                         cout<<"enter the eid\n";
                         cin>>eid;
                }
                void put()
                {
                        //write();
                        cout<<eid<<endl;

                }
};
class department:public student
{
        private:
                int dept_id;
                char dept_name[20];
        public:
                void get1()//inheritable member
                {

                        cout<<"enter valeu for deptid and deptname\n";
                        cin>>dept_id;
                        cin>>dept_name;
                }
                void put1()
                {

                        cout<<dept_id<<endl;
                        cout<<dept_name<<endl;
                }
};
class teacher:public student,public exam,public department
{
	private:
		char teacher_id[10];
		char teacher_name[20];
	public:
		void get2()
		{
			cout<<"enter teacher id and name\n";
			cin>>teacher_id;
			cin>>teacher_name;
		}
		void put2()
		{
			cout<<teacher_id<<endl;
			cou<<teacher_name<<endl;
		}
};


int main()
{
        teacher t;
        t.read();
        t.get();
        t.get1();
        t.write();
        t.put();
        t.put1();


}


#include<iostream>
#include<string.h>
using namespace std;
class student
{
        private:
                int roll;
                char name[20];
        public:
                void read()
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
class exam:public student
{
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
int main()
{
	exam e;
	e.read();
	e.get();
	e.write();
	e.put();
}

	

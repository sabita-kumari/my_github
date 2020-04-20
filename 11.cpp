#include<iostream>
using namespace std;
class binary
{
        private:
                int a;
                float b;
                int c;
        public:
                void read()
                {
                        cout<<"enter the value\n";
                        cin>>a;
                        cin>>b;
                        cin>>c;
                }
                binary operator +(binary p)
                {
                        binary q;
			binary r;
                        q.a=a*b*c/100;
			q.b=1+(a)*b;
			q.c=(a+b)/c;
			
			r.a=a+b+c;
			r.b=c-a;
			r.c=a*a*a;

			cout<<endl<<r.a<<endl;
			cout<<endl<<r.b<<endl;
			cout<<endl<<r.c<<endl;
                        
                    
                        return q;
                }


                void write()
                {
                        cout<<a<<endl;
                        cout<<b<<endl;
                        cout<<c<<endl;
                }
};
int main()
{
        binary x;
        x.read();
        binary y;
	y.read();
	binary z;
	z=x+y;
	z.write();
}	



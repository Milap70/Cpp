#include<iostream>
using namespace std;
class Unary
{
     int a=5;
     int b=6;
     int c=3;
     public:
         void get()
         {
              cout<<"Values of A, B & C\n";
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
         }
         void show()
         {
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
         }
         void friend operator-(Unary &x);   
};
void operator-(Unary &x)
{
     x.a = -x.a;     
     x.b = -x.b;
     x.c = -x.c;
}
int main()
{
     Unary x1;
     x1.get();
     cout<<"Before Overloading\n";
     x1.show();
     cout<<"After Overloading \n";
     -x1;
      x1.show();
      return 0;
}


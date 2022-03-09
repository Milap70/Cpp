#include<iostream>
using namespace std;

class A{
	public:
	int i;

};

class B: virtual public A{
	public:
	int j;

};

class C: virtual public A{
	public:
	int k;

};

class D: public B, public C{
	public:
	int sum;

};

int main(){

	D ob;
	ob.i = 1;
	ob.j = 2;
	ob.k = 3;
	ob.sum = ob.i + ob.j + ob.k;
	cout << ob.sum; 
return 0;
}

#include<iostream>
using namespace std;

class ABC{
	public:
	void disp(){
		cout <<"\nThis is parent class\n";
	}
};

class XYZ: public ABC{
	public:
	void disp(){
		cout<<"\nTHis is child class";
	}
};

int main(){
	XYZ x;
	x.disp();
	x.ABC::disp();
	return 0;
}


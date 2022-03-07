#include<iostream>
using namespace std;

class length{
	public:
	int l;
	void l1(){
		cout <<"Enter Length:"<<endl;
		cin>>l;	
	}
};

class breadth{
	public:
	int b;
	void b1(){
		cout <<"Enter Breadth:"<<endl;
		cin>>b;	
	}
};

class height{
	public:
	int h;
	void h1(){
		cout <<"Enter Height:"<<endl;
		cin>>h;	
	}
};

class volume: public length,public breadth,public height{
	public:
	void vol(){
		cout<< "Volume is: " << l*b*h << endl;
	}
};

int main(){
volume v1;
v1.l1();
v1.b1();
v1.h1();
v1.vol();
return 0;

}


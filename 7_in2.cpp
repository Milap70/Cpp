#include<iostream>
using namespace std;

class person{
	public:
	int a1;
	void fun1(){
	cout << "Inside Public ";
	}
	protected:
	int a2;	
	void fun2(){
		cout <<"Inside Protected"<<endl;
	}
	private:
	int a3;
	void fun3(){
		cout <<"Inside Private"<<endl;		
	}
};

class doctor: public person{
	public:
	int b1;
	void d1(){
		cout <<"Derived Class" <<endl;
	}
	
};


int main(){
doctor d1;

cout <<"Doctor: "<< endl;
d1.fun1();
d1.fun2();
d1.fun3();

return 0;
	

}

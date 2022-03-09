#include<iostream>
using namespace std;

class B{
	int x;
	public:
	B(){
		cout<<"Base Constructor\n";	
	}
	~B(){
		cout<<"Destructor\n";
	}
};

class D : public B{
	int y;
	public:
	D(){
		cout <<"Derived Constructor\n";	
	}
	D(int i){
		cout <<"Parameterized constructor\n";
	}
};

int main(){

	B b1;
	D d1;
	D d2(10);
return 0;
}

#include<iostream>
using namespace std;

class car{
	public:
	void l1(){
		cout <<"Tesla"<<endl;
	}
	protected:
	void l2(){
		cout <<"---->Checking\n";	
	}
};

class model1: virtual public car{
	public:
	void m1(){
		cout<< "Model X" << endl;
	}
};

class model2: public virtual car{
	public:
	void m2(){
		cout<< "Roadster" << endl;	
	}
};

class all: public model1, public model2{
	public:
	void disp(){
		cout<< "Two top models of Tesla are: " << endl;
		l2();
	}
};

int main(){
model1 obj1;
model2 obj2;
all a1;
car c1;
cout <<"Name of car company: "<< endl;
c1.l1();
a1.disp();
a1.m1();
a1.m2();

return 0;

}

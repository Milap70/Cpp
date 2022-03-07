#include<iostream>
using namespace std;

class person{
	public:
	int age, height, weight;
	void data(){
	cout << "Enter Age: ";	
	cin >>age;
	cout << "Enter Height: ";	
	cin >>height;
	cout << "Enter Weight: ";	
	cin >>weight;
	}
	void walk(){
		cout <<"Walking"<<endl;
	}
	void talk(){
		cout <<"Talking"<<endl;		
	}
};

class doctor: public person{
	public:
	void d1(){
		cout <<"He is a doctor" <<endl;
	}
	
};

class footballer: public person{
	public:
	void f1(){
		cout <<"He is a footballer" <<endl;
	}
};

class businessman: public person{
	public:	
	void b1(){
	
		cout <<"He is a businessman" <<endl;
	}
};

int main(){
doctor obj1;
footballer obj2;
businessman obj3;
cout <<"Doctor: "<< endl;
obj1.data();
obj1.walk();
obj1.talk();
obj1.d1();
cout<<endl;
cout <<"Footballer: "<< endl;
obj2.data();
obj2.walk();
obj2.talk();
obj2.f1();
cout<<endl;
cout <<"Businessman: "<< endl;
obj3.data();
obj3.walk();
obj3.talk();
obj3.b1();

return 0;
	

}

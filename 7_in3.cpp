#include<iostream>
using namespace std;

class person{
	public:
	void walk(){
		cout <<"Walking"<<endl;
	}
	void talk(){
		cout <<"Talking"<<endl;		
	}

};

class doctor: public person{
	public:
	int age,weight,height;
	void data(){
	cout << "Enter Age: ";	
	cin >>age;
	cout << "Enter Height: ";	
	cin >>height;
	cout << "Enter Weight: ";	
	cin >>weight;
	}



};

class ortho: public doctor{
	public:
	void disp(){
	cout<<"\nOrtho Doctor\n";
	}

};

int main(){

ortho obj1;
obj1.walk();
obj1.data();
obj1.disp();



}

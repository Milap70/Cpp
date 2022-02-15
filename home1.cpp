#include<iostream>
using namespace std;

class measure{
	public:
	float l,b,h;
	void get(){
		cout << "Enter Height: ";
		cin >> h;
		cout << "Enter Length: ";
		cin >> l;
		cout << "Enter Width: ";
		cin >> b; 
	}

	float area(){
		return l*h;
	}
	float volume(){
		return l*b*h;
	}
};

int main(){
	measure mes;
	mes.get();
	cout << "Area is: " << mes.area() << endl;
	
	cout << "Volume is: " << mes.volume() << endl;
return 0;
}

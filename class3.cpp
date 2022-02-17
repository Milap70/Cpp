#include<iostream>
using namespace std;
class calc{
	public:
	int n1;
	int n2;
	void get(){
	
	cout << "Enter num1: ";
	cin >> n1;
	cout << "Enter num2: ";
	cin >> n2; 
	}
	
	int sub();
	};
int calc:: sub(){
	return n1 - n2;
}

int main(){
	calc cal;
	cal.get();
	cout << "Result: " << cal.sub() << endl;
return 0;
}

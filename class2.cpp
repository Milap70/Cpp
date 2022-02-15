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

	int add(){
	return n1 + n2;
	}

	int sub(){
	return n1 - n2;
	}

	int mul(){
	return n1 * n2;
	}

	int div(){
	return n1 / n2;
	}
};

int main(){
	int choice;
	calc cal;
	cout << "To Add PRESS 1\n" 
	<< "To Subtract PRESS 2\n" 
	<< "To Multiply PRESS 3\n" 
	<< "To Divide PRESS 4\n" ; 
	do {
		cout << "Enter Choice: ";
		cin >> choice;
	switch (choice){
		case 1:
			cal.get();
			cout << "Result: " << cal.add() << endl;
			break;
		case 2:
			cal.get();
			cout << "Result: " << cal.sub() << endl;
			break;
		case 3:
			cal.get();
			cout << "Result: " << cal.mul() << endl;
			break;
		case 4:
			cal.get();
			cout << "Result: " << cal.div() << endl;
			break;
}	
	}
	while (choice >= 1 && choice <= 4);
return 0;
}

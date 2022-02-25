#include<iostream>
using namespace std;
int main(){
	int *ptr1, *ptr2, sum;
	ptr1 = new int;
	ptr2 = new int;
	cout << "Enter First Number: ";
	cin >> *ptr1;
	cout << "Enter Second Number: ";
	cin >> *ptr2;
	sum = *ptr1 + *ptr2;
	cout << "Sum of pointer variables: " << sum << endl;
	delete ptr1;
	delete ptr2;
	return 0;

		
}

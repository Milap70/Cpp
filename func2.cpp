#include<iostream>
using namespace std;
int vol(int l=5, int w=6, int h=7){
	return l*w*h;
}
int main(){
	cout << "Cube is: " << vol() << endl;
	cout << "Cube is (9): " << vol(9) << endl;
	cout << "Cube is (15,12): " << vol(15,12) << endl;
	cout << "Cube is (3,4,7): " << vol(3,4,7) << endl;
	return 0;
}

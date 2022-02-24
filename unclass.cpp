#include<iostream>
using namespace std;

class Unary{
	int x,y,z;
	public:
	Unary(){
		x=y=z=0;
	}
	Unary(int a, int b, int c){
		x = a;
		y = b;
		z = c;
	}
	void display(){
		cout <<"x=" << x <<",y=" << y <<",z=" << z << endl;

	}
	void operator --();

};
void Unary::operator--(){
	x= --x;
	y= --y;
	z= --z;

}
int main(){
	Unary u1(5,2,1);
	u1.display();
	--u1;
	u1.display();
	return 0;
} 

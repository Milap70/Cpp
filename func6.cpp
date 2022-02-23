#include<iostream>
using namespace std;
class Complex{
	int real, img;
	public:
		Complex(){
			real = 0;
			img = 0;

		}
		Complex(int x, int y){
			real = x;
			img = y;
		}
		void display(){
			cout <<"The value for real: "<< real <<"The value for img: " << img << endl;
		}

		friend Complex operator - (Complex ob1, Complex ob2);
};

class Com{
	int x,y;
	public:
		Com(){
			x = 0;
			y = 0;
		}
	Com(int p , int q){
			x = p;
			y = q;
		}
	void display(){
		cout <<"The value for x: "<< x <<"The value for y: " << y << endl;
		}
	friend Com operator - (Com obj1, Com obj2);

};
Complex operator - (Complex ob1, Complex ob2){
			Complex temp;
			temp.real = ob1.real - ob2.real;
			temp.img = ob1.img - ob2.img;
		return temp;	
		}

Com operator * (Com obj1, Com obj2){
			Com temp;
			temp.x = obj1.x * obj2.x;
			temp.y = obj1.y * obj2.y;
		return temp;
		}
int main(){
	Complex ob1(2,4), ob2(5,6);
	Com obj1(2,4), obj2(5,6);
	Complex ob3;
	Com obj3;
	ob1.display();
	ob2.display();
	ob3.display();
	ob3 = ob1 - ob2;
	ob3.display();
	obj3 = obj1 * obj2;
	obj3.display();

return 0;
}

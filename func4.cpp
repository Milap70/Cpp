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
			cout << "This value is real part: " << real <<" This img part: "<< img << endl;
		}
//1.
		Complex operator + (Complex ob){
			Complex temp;
			temp.real = real + ob.real;
			temp.img = img + ob.img;
		return temp;

		}
//2.
		Complex operator - (Complex ob){
			Complex temp;
			temp.real = real - ob.real;
			temp.img = img - ob.img;
		return temp;

		}
//3.
		Complex operator / (Complex ob){
			Complex temp;
			temp.real = real / ob.real;
			temp.img = img / ob.img;
		return temp;

		}
//4.
		Complex operator * (Complex ob){
			Complex temp;
			temp.real = real * ob.real;
			temp.img = img * ob.img;
		return temp;

		}
//5.
		Complex operator % (Complex ob){
			Complex temp;
			temp.real = real % ob.real;
			temp.img = img % ob.img;
		return temp;

		}
//6.
		Complex operator = (Complex ob){
			Complex temp;
			temp.real = (real = ob.real);
			temp.img = (img = ob.img);
		return temp;

		}
//7.
		Complex operator += (Complex ob){
			Complex temp;
			temp.real = (real += ob.real);
			temp.img = (img += ob.img);
		return temp;

		}
//8.
		Complex operator *= (Complex ob){
			Complex temp;
			temp.real = (real *= ob.real);
			temp.img = (img *= ob.img);
		return temp;
//9.
		}
		Complex operator > (Complex ob){
			Complex temp;
			temp.real = (real > ob.real);
			temp.img = (img > ob.img);
		return temp;

		}
//10.
		
		Complex operator & (Complex ob){
			Complex temp;
			temp.real = (real & ob.real);
			temp.img = (img & ob.img);
		return temp;

		}
//11.
		
		Complex operator ^ (Complex ob){
			Complex temp;
			temp.real = (real ^ ob.real);
			temp.img = (img ^ ob.img);
		return temp;

		}
//12.
		
		Complex operator | (Complex ob){
			Complex temp;
			temp.real = (real | ob.real);
			temp.img = (img | ob.img);
		return temp;

		}		
};
int main(){
	Complex c1(20,6), c2(5,10);
	Complex c3;
	c1.display();
	c2.display();
	c3.display();
	cout << "The Action Starts Here: " << endl;
	c3 = c1 + c2;
	c3.display();

	c3 = c1 - c2;
	c3.display();

	c3 = c1/c2;
	c3.display();

	c3 = c1*c2;
	c3.display();

	c3 = c1%c2;
	c3.display();

	c3 = (c1=c2);
	c3.display();

	c3 = (c1+=c2);
	c3.display();

	c3 = (c1*=c2);
	c3.display();

	c3 = (c1>c2);
	c3.display();

	c3 = (c1&c2);
	c3.display();

	c3 = (c1^c2);
	c3.display();

	c3 = (c1|c2);
	c3.display();
return 0;
}

#include<iostream>
using namespace std;
class Friend{
	int real;
	int img;
	public:
		Friend(){
			real = 0;
			img = 0;			
		}
		Friend(int x, int y){
			real = x;
			img = y;		
		}
		void display(){
			cout << "This value is real part: " << real <<" This img part: "<< img << endl;		
		}

		friend Friend operator + (Friend ob1, Friend ob2 );
		friend Friend operator - (Friend ob1, Friend ob2 );
		friend Friend operator * (Friend ob1, Friend ob2 );
		friend Friend operator / (Friend ob1, Friend ob2 );
		friend Friend operator % (Friend ob1, Friend ob2 );
					
		
};
//1.
		Friend operator + (Friend ob1, Friend ob2){
			Friend temp;
			temp.real = ob1.real + ob2.real;
			temp.img = ob1.img + ob2.img;
		return temp;

		}
//2.
		Friend operator - (Friend ob1, Friend ob2){
			Friend temp;
			temp.real = ob1.real - ob2.real;
			temp.img = ob1.img - ob2.img;
		return temp;

		}
//3.
		Friend operator * (Friend ob1, Friend ob2){
			Friend temp;
			temp.real = ob1.real * ob2.real;
			temp.img = ob1.img * ob2.img;
		return temp;

		}
//4.
		Friend operator / (Friend ob1, Friend ob2){
			Friend temp;
			temp.real = ob1.real / ob2.real;
			temp.img = ob1.img / ob2.img;
		return temp;

		}
//5.
		Friend operator % (Friend ob1, Friend ob2){
			Friend temp;
			temp.real = ob1.real % ob2.real;
			temp.img = ob1.img % ob2.img;
		return temp;

		}
	
		
int main(){
	Friend ob1(2,4), ob2(5,6);
	Friend ob3;
	ob1.display();
	ob2.display();
	ob3.display();
	cout << "After Overloading: " << endl;
	ob3 = ob1 + ob2;
	ob3.display();

	ob3 = ob1 - ob2;
	ob3.display();

	ob3 = ob1 * ob2;
	ob3.display();
//Here Divison operator give wrong answer while implementing operator      	overloading in friend function.
	ob3 = ob1 / ob2;
	ob3.display();

	ob3 = ob1 % ob2;
	ob3.display();


return 0;
}

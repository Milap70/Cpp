#include<iostream>
using namespace std;
class calc{
	private:
		int n1, n2;
		void setInput(int a, int b){
		n1 = a;
		n2 = b;
	}
	int add(calc, calc);
	calc mul(calc, calc);
	public:
		int sub(){
			return n1-n2;
		}
	
};

int calc :: add(calc obj1, calc obj2){
	return obj1.n1+obj2.n2;
	}
calc calc :: mul(calc obj1, calc obj2){
	obj1.sub();
	cout << "Hi" << obj1.sub();
	calc obj3;
	obj3.setInput(obj1.n1*obj2.n2, obj1.n1*obj2.n1);
	return obj3;

}

int main(){
	calc obj1, obj2, obj3, obj4;
	int x,y;
	cout << "Enter two number " << endl;
	cin >> x >> y;
	obj1.setInput(x,y);
	obj2.setInput(40,50);
	cout << x << y << endl;
	cout << "Sum "<< obj1.add(obj1,obj2);
	obj4 = obj1.mul(obj1,obj2 );
	cout << "MUL is : " << obj4.n1 << endl << obj4.n2; 
}

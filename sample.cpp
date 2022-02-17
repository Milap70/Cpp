#include<iostream>
using namespace std;
class calc{
	public:
	int n1;
	int n2;
	void setInput(int a, int b){
	n1 = a;
	n2 = b;
}
	calc add(calc obj1, calc obj2){
	calc obj3;	
	obj3.n1 = (obj1.n1 + obj2.n1);
	obj3.n2 = (obj1.n2 + obj2.n2);
	return obj3;
	}

};

int main(){
	calc obj1,obj2, obj3;
	obj1.setInput(10,2);
	obj2.setInput(5,5);
	obj3 = obj1.add(obj1, obj2);
	
	cout << "Sum: " << obj3.n1 << " " << obj3.n2;
return 0;	
}

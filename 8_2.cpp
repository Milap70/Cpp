#include<iostream>
using namespace std;
class base {
	protected:
	int i,j;
	public:
	void set(int a, int b){
		i=a;
		j=b;
	}
	void show(){
		cout << i << "" <<j;
	}
};
class derived: private base{
	int k;
	public:
	void setk(){
		k = i*j;	
	}
	void showk(){
		cout << k;
	}

};

class derived1: public derived{
	int m;
	public:
	void setm(){
		m= i-j;	
	}
	void showm(){
		cout << m;
	}

};

int main(){
	derived1 ob1;
	derived ob;
	ob.set(1,2);
	ob.show();
	ob1.set(3,4);
	ob1.show();
return 0;

}

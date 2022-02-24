#include<iostream>
using namespace std;

class Demo{
	int m;
public:
	Demo(){
		m = 0;
	}
	Demo (int x){
		m = x;
	}
	void operator ++(){
		++m;
		cout << "Pre Increment: " << m << endl;
	}
	void operator ++(int x){
		m++;
		cout << "Post Increment: " << m << endl;
	}
};

int main(){
	Demo d1(6);
	++d1;
	d1++;
return 0;
	
}

#include<iostream>
using namespace std;
class func{
public:
float sum(float l, float b, float h){
		return (l+b+h);
	}
int sum(int l){
		return (l);
	}
char sum(char l, char b){
		return (l+b);
	}
};
int main(){
	func obj;			
	obj.sum(9);

	cout << "Sum is (9): " << obj.sum(9) << endl;
	cout << "Sum is (8,p): " << obj.sum(8,'p') << endl;
	cout << "Sum is (3.3,4.5,7.8): " << obj.sum(3.3,4.5,7.8) << endl;
	return 0;
}

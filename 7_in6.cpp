#include<iostream>
using namespace std;
int i;
class student{
	public:
	int roll_no;
	char name[20];
	void stud(){
		cout << "Enter Roll no: ";
		cin >> roll_no;
		cout <<"Enter Name: ";
		cin.get();
		cin.getline(name, 20);
	}
};

class test{
	public:
	int m1, m2, m3, m4, m5;
	void tt()
	{	
		cout <<"Enter marks: ";
		cin >> m1;
		cout <<"Enter marks: ";
		cin >> m2;
		cout <<"Enter marks: ";
		cin >> m3;
		cout <<"Enter marks: ";
		cin >> m4;
		cout <<"Enter marks: ";
		cin >> m5;
		
	
	}

};

class result : public student, public test{
	public:
 	void res(){

		cout<<"Sum of marks: " << m1+m2+m3+m4+m5 << endl;
		cout<<"Percentage of student: " << (m1+m2+m3+m4+m5)/5 << endl;
	}
		

}; 

int main(){
student s1;
test t1;
result r1;
s1.stud();
t1.tt();
r1.res();
return 0;


}

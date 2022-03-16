#include<iostream>
#include<fstream>
using namespace std;

class student{
	public: 
	int roll;
	char name[25];
	float marks;
void getdata(){
	cout<<"Enter roll number: ";
	cin>>roll;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter Marks: ";
	cin>>marks;
}
void add(){
	fstream f;
	student stu;
	f.open("st2.dat", ios::app|ios::binary);
	stu.getdata();
	f.write((char*)&stu, sizeof(stu));
	f.close();
}
void display(){

	fstream f;
	student stu;
	int roll_num;
	cout<<"Enter roll number to search: ";
	cin>>roll_num;
	f.open("st2.dat", ios::in|ios::binary);
	while(!f.eof()){
	f.read((char*)&stu, sizeof(stu));
	if(roll_num == stu.roll){
	cout<<"Roll number: "<<stu.roll<<"\nName: "<<stu.name<<"\nMarks: "<<stu.marks<<endl;
}
}
	f.close();
}
};

int main(){

student stu;
char ch = 'n';
do{
	stu.add();
	cout<<"Want to add more?(y/n)"<<endl;
	cin>>ch;
}
while(ch=='y'||ch=='Y');
cout<<"Updated!"<<endl;
stu.display();

return 0;


}

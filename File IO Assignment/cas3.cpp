#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream fin;
	
	fin.open("c6.txt");
	int count = 0;
	char word[30];
	if(!fin)
		cout<<"File cannot open" <<endl;
	else{
		while(!fin.eof()){
			while(fin>>word){
			cout << "\t" << word;
			if(word[0] == 'e')
			count++;
		}
	}
}
cout<<"\nTotal words: " << count << endl;
fin.close();
}

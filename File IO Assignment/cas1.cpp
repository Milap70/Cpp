#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream input;
	input.open("c1.txt");
	int count = 0;
	string word;
	if(!input)
		cout<<"File cannot open" <<endl;
	else{
		while(!input.eof()){
			while(input>>word){
			cout << "\t" << word;
			if(word == "the" || word == "The")
				count++;
			}
		}
	cout<<"\nTotal words: " << count << endl;
	}

input.close();
}

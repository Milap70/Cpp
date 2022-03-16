#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
	ifstream fin;
	fin.open("c6.txt");
	int len;
	int count = 0;
	char word[30];
	if(!fin)
		cout<<"File cannot open" <<endl;
	else{
		while(!fin.eof()){
			fin>>word;
			cout << "\t" << word;
			len = strlen(word);
		for(int i=0;i<len;i++){
			if(word[len-1] == 'e'){
			count++;
			break;
			}
		}
	}
}
cout<<"\nTotal words: " << count << endl;
fin.close();
}

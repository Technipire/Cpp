#include<iostream>
#include<istream>
#include<fstream>
#include<string>

using namespace std;

bool read(istream &f){
	string type;
	string line;
	f>>type;
	string height, width,name;
	cout << "read fish" << endl;
	cout << type << endl;
	if(type=="fish" && !cin.eof()){
		f>>height>>width>>name;
	}
	cout << height << " " << width << " " << name << endl;
	return true;
}

int main(){
	fstream myfile;
	myfile.open("data");
	
	string s = "fish 1 20 20 minnow";
	read(myfile);
	return 0;
}

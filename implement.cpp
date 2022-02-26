#include <iostream>
#include <fstream>
#include <string>
#include "implement.h"
using namespace std;
int implement::read_me(){
	string line;
	ifstream myfile ("README.md");
	if(myfile.is_open()){
		while(getline(myfile,line))
			cout << line << endl;
		myfile.close();
		return 0;
	}
	else{
		cout << "Unable to open file";
		return -1;
	}
}

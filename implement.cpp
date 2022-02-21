
#include <iostream>
#include <fstream>
#include <string>
#include "implement.h"
using namespace std;
int implement::read_me()
{
  string line;
  ifstream myfile ("README.md");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
      cout << line << '\n';
    myfile.close();
		return 1;
  }
  else 
		cout << "Unable to open file"; 
		return 0;
}
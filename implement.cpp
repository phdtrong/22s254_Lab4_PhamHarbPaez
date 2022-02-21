
#include <iostream>
#include <fstream>
#include <string>
#include "implement.h"
using namespace std;
void implement::read_me()
{
  string line;
  ifstream myfile ("README.md");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
      cout << line << '\n';
    myfile.close();
  }
  else 
		cout << "Unable to open file"; 
}
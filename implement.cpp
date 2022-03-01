#include <iostream>
#inlcude <fstream>
#include <string>
#include "implement.h"
using namespace std;

int implement::readme()
{
  string line;

  ifstream myFile ("README.md");

  if (myFile.is_open())
  {
    while (getline (myFile,line))
    cout << line << '\n';
    myFile.close();
    return 0;
  }
  else
  {
    cout << "Unable to open file";
    return -1;
  }
}

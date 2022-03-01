<<<<<<< HEAD
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
=======

>>>>>>> 71498a8e5dc96d01a6e116796d7f18696ddb36af

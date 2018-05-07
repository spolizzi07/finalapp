#include <iostream>
#include <fstream>
#include <string>
#include "dragonvault.h"
#include "blackwhite.h"

using namespace std;

void expanded()
{
  string set;
  int num;
  
  cout << "\n*************************" << endl;
  cout << "*****Expanded Format*****" << endl;
  cout << "*************************" << endl;
  
  cout << "\n1. Dragon Vault" << endl;
  cout << "2. Black & White" << endl;
  cout << "Enter a Pokemon set: " << endl;
  cout << "You may enter the set name or the number next to the set name" << endl;
  cin >> set;
  
  if(set == "1" || set == "Dragon Vault" || set == "dragon vault")
  {
    dragonvault();
  }
  
  else if(set == "2" || set == "Black & White" || set == "black & white")
  {
    blackwhite();
  }
  
  else
  {
    cout << "Invalid input. Please choose a set listed." << endl;
    expanded();
  }
}
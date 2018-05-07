#include <iostream>
#include <fstream>
#include <string>
#include "baseset.h"
#include "jungle.h"

using namespace std;

//This is the unlimited format function that is called by the main menu
void unlimited()
{
  string set;
  int num;
  
  //displays the unlimited set menu
  cout << "\n*************************" << endl;
  cout << "*****Unlimited Format*****" << endl;
  cout << "*************************" << endl;
  
  //gives the list of sets to choose from and ask the user for input
  cout << "\n1. Base Set" << endl;
  cout << "2. Jungle" << endl;
  cout << "Enter a Pokemon set: " << endl;
  cout << "You may enter the set name or the number next to the set name." << endl;
  cin >> set;
  
  //calls the base set function if the user inputs one of the following
  if(set == "1" || set == "Base Set" || set == "base set")
  {
    baseset();
  }
  //calls the jungle set function if the user inputs one of the following
  else if(set == "2" || set == "Jungle" || set == "jungle")
  {
    jungle();
  }
  //checks for user input validation and calls the unlimited format function
  //again if the user enters and invalid input
  else
  {
    cout << "Invalid input. Please choose a set listed." << endl;
    unlimited();
  }
} 
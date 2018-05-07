#include <iostream>
#include <fstream>
#include <string>
#include "generations.h"

using namespace std;

//This is the standard format function that is called by the main menu
void standard()
{
  string set;
  int num;
  
  //displays the standard format menu
  cout << "\n*************************" << endl;
  cout << "*****Standard Format*****" << endl;
  cout << "*************************" << endl;
  
  //gives the list of sets to choose from in the standard Format
  //also asks for the user to enter one of the sets listed
  cout << "\n1. Generations" << endl;
  cout << "Enter a Pokemon set: " << endl;
  cout << "You may enter the set name or the number next to the set name." << endl;
  cin >> set;
  
  //calls the generations set function if the user enter one of the following inputs
  if(set == "1" || set == "generations" || set == "Generations")
  {
    generations();
  }
  
  //User input validation, this will call the standard function again and ask to
  //enter the set you want to choose again if the user gives an invalid input
  else
  {
    cout << "Invalid input. Please choose a set listed." << endl;
    standard();
  }
}


#include <iostream>
#include <string>
#include "standard.h"
#include "expanded.h"
#include "unlimited.h"

using namespace std;

//This is the menu function
void menu()
{
  string format;
  
  //displays the main menu and a list of formats to choose from.
  cout << "*******************" << endl;
  cout << "*****Main menu*****" << endl;
  cout << "*******************" << endl;
  
  cout << "\n1. Standard" << endl;
  cout << "2. Expanded" << endl;
  cout << "3. Unlimited"<< endl;
  cout << "Enter a format: ";
  cin >> format;
  
  //Checks to see if the input is calling for the standard format 
  //And if the user input matches it will call the standard function
  if(format == "1" || format == "Standard" || format == "standard")
  {
    standard();
  }
  //Checks to see if the input is calling for the expanded format 
  //And if the user input matches it will call the expanded function
  else if(format == "2" || format == "Expanded" || format == "expanded")
  {
    expanded();
  }
  //Checks to see if the input is calling for the unlimited format 
  //And if the user input matches it will call the unlimited function
  else if(format == "3" || format == "Unlimited" || format == "unlimited")
  {
    unlimited();
  }
  //This is for user input validation if the user inputs anything besides one
  //of the formats listed it will prompt the menu to display again
  else
  {
    cout << "\nInvalid input. Please enter an option from the menu.\n" << endl;
    menu();
  }
}
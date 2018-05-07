#include <iostream>
#include <fstream>
#include <string>
#include "jungle.h"
#include "menu.h"

using namespace std;

int jungleCards();
void menu();

int jungle()
{
  string name;
  string answer;
  int num;
  int x;
  int y;
  
  num = jungleCards();
    
  x = num;
  y = x + 27;
  
  cout << endl;
  
  //declare read stream
  ifstream filein;
  //opens file
  filein.open("jungle.txt", ios::in);
  //declare string to hold each line of text
  string line;
  //prints lines for the corresponding card
  for (int i = 1; !filein.eof() ; i++)
  {
    getline(filein, line);

    if (i <= y && i >= x) 
    {
      cout << line << endl;
    }
  }
  
  cout << "Would you like to return to the main menu? (y/n)" << endl;
  cin >> answer;
  
  if(answer == "y" || answer == "yes" || answer == "Y")
  {
    menu();
  }
  
  else if(answer == "n" || answer == "N" || answer == "no")
  {
    return 0;
  }
  
  else
  {
    return 0;
  }
  
}

int jungleCards()
{
  string name;
  int num;
  
  cout << "\n1. Clefable 1/64" << endl;
  cout << "2. Electrode 2/64" << endl;
  cout << "3. Flareon 3/64" << endl;
  cout << "4. Jolteon 4/64" << endl;
  cout << "5. Kangaskhan 5/64" << endl;
  
  cout << "\nEnter a card name you want to find from this set: ";
  cin>>name;
   
  if(name == "Clefable 1/64" || name == "clefable 1/64" || name == "1")
  {
    num = 1;
  } 
  
  else if(name == "Electrode 2/64" || name == "electrode 2/64" || name == "2")
  {
    num = 29;
  }
  
  else if(name == "Flareon 3/64" || name == "flareon 3/64" || name == "3")
  {
    num = 57;
  }
  
  else if(name == "Jolteon 4/64" || name == "jolteon 4/64" || name == "4")
  {
    num = 85;
  }
  
  else if(name == "Kangaskhan 5/64" || name == "kangaskhan 5/64" || name == "5")
  {
    num = 113;
  }
  
  else
  {
    cout << "Invalid input. Returning to the main menu." << endl;
    menu();
  }
  
  return num;
}
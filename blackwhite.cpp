#include <iostream>
#include <fstream>
#include <string>
#include "blackwhite.h"
#include "menu.h"

using namespace std;

int blackWhiteCards();
void menu();

int blackwhite()
{
  string name;
  string answer;
  int num;
  int x;
  int y;
  
  num = blackWhiteCards();
    
  x = num;
  y = x + 27;
  
  cout << endl;
  
  //declare read stream
  ifstream filein;
  //opens file
  filein.open("blackwhite.txt", ios::in);
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

int blackWhiteCards()
{
  string name;
  int num;
  
  cout << "\n1. Snivy 1/114" << endl;
  cout << "2. Snivy 2/114" << endl;
  cout << "3. Servine 3/114" << endl;
  cout << "4. Servine 4/114" << endl;
  cout << "5. Serperior 5/114" << endl;
  
  cout << "\nEnter a card name you want to find from this set: ";
  cin>>name;
   
  if(name == "Snivy 1/114" || name == "snivy 1/114" || name == "1")
  {
    num = 1;
  } 
  
  else if(name == "Snivy 2/114" || name == "snivy 2/114" || name == "2")
  {
    num = 29;
  }
  
  else if(name == "Servine 3/114" || name == "servine 3/114" || name == "3")
  {
    num = 57;
  }
  
  else if(name == "Servine 4/114" || name == "servine 4/114" || name == "4")
  {
    num = 85;
  }
  
  else if(name == "Serperior 5/114" || name == "serperior 5/114"|| name == "5")
  {
    num = 113;
  }
  
  else
  {
    cout << "Invalid input. Returning to main menu." << endl;
    menu();
  }
  
  return num;
}
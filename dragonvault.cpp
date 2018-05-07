#include <iostream>
#include <fstream>
#include <string>
#include "dragonvault.h"
#include "menu.h"

using namespace std;

int dragonVaultCards();
void menu();

int dragonvault()
{
  string name;
  string answer;
  int num;
  int x;
  int y;
  
  num = dragonVaultCards();
    
  x = num;
  y = x + 27;
  
  cout << endl;
  
  //declare read stream
  ifstream filein;
  //opens file
  filein.open("dragonvault.txt", ios::in);
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

int dragonVaultCards()
{
  string name;
  int num;
  
  cout << "\n1. Dratini 1/20" << endl;
  cout << "2. Dratini 2/20" << endl;
  cout << "3. Dragonair 3/20" << endl;
  cout << "4. Dragonair 4/20" << endl;
  cout << "5. Dragonite 5/20" << endl;
  
  cout << "\nEnter a card name you want to find from this set: ";
  cin>>name;
   
  if(name == "Dratini 1/20" || name == "dratini 1/20" || name == "1")
  {
    num = 1;
  } 
  
  else if(name == "Dratini 2/20" || name == "dratini 2/20" || name == "2")
  {
    num = 29;
  }
  
  else if(name == "Dragonair 3/20" || name == "dragonair 3/20" || name == "3")
  {
    num = 57;
  }
  
  else if(name == "Dragonair 4/20" || name == "dragonair 4/20" || name == "4")
  {
    num = 85;
  }
  
  else if(name == "Dragonite 5/20" || name == "dragonite 5/20"|| name == "5")
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
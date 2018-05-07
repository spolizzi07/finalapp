#include <iostream>
#include <fstream>
#include <string>
#include "baseset.h"
#include "menu.h"

using namespace std;

int baseSetCards();
void menu();

int baseset()
{
  string name;
  string answer;
  int num;
  int x;
  int y;
  
  num = baseSetCards();
    
  x = num;
  y = x + 27;
  
  cout << endl;
  
  //declare read stream
  ifstream filein;
  //opens file
  filein.open("baseset.txt", ios::in);
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

int baseSetCards()
{
  string name;
  int num;
  
  cout << "\n1. Alakazam 1/102" << endl;
  cout << "2. Blastoise 2/102" << endl;
  cout << "3. Chansey 3/102" << endl;
  cout << "4. Charizard 4/102" << endl;
  cout << "5. Clefairy 5/102" << endl;
  
  cout << "\nEnter a card name you want to find from this set: ";
  cin>>name;
   
  if(name == "Alakazam 1/102" || name == "alakazam 1/102" || name == "1")
  {
    num = 1;
  } 
  
  else if(name == "Blastoise 2/102" || name == "blastoise 2/102" || name == "2")
  {
    num = 29;
  }
  
  else if(name == "Chansey 3/102" || name == "chansey 3/102" || name == "3")
  {
    num = 57;
  }
  
  else if(name == "Charizard 4/102" || name == "charizard 4/102" || name == "4")
  {
    num = 85;
  }
  
  else if(name == "Clefairy 5/102" || name == "clefairy 5/102" || name == "5")
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
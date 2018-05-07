#include <iostream>
#include <fstream>
#include <string>
#include "generations.h"
#include "menu.h"

using namespace std;

int generationsCards();
void menu();

int generations()
{
  string name;
  string answer;
  int num;
  int x;
  int y;
  
  num = generationsCards();
    
  x = num;
  y = x + 27;
  
  cout << endl;
  
  //declare read stream
  ifstream filein;
  //opens file
  filein.open("generations.txt", ios::in);
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

int generationsCards()
{
  string name;
  int num;
  
  cout << "\n1. VenusaurEX 1/83" << endl;
  cout << "2. M VenusaurEX 2/83" << endl;
  cout << "3. Caterpie 3/83" << endl;
  cout << "4. Metapod 4/83" << endl;
  cout << "5. Butterfree 5/83" << endl;
  cout << "6. Paras 6/83" << endl;
  cout << "7. Parasect 7/83" << endl;
  cout << "8. Tangela 8/83" << endl;
  cout << "9. Pinsir 9/83" << endl;
  cout << "26. Pikachu 26/83" << endl;
  cout << "27. Raichu 27/83" << endl;
  
  cout << "\nEnter a card name you want to find from this set: ";
  cin>>name;
   
  if(name == "VenusaurEX" || name == "venusaurEX" || name == "Venusaur EX" || name == "venusaur EX" || name == "venasaur ex" || name == "Venusaur ex" || name == "1")
  {
    num = 1;
  } 
  
  else if(name == "M VenusaurEX" || name == "m venusaurEX" || name == "Mega VenusaurEX" || name == "mega venusaurEX" || name == "2")
  {
    num = 29;
  }
  
  else if(name == "Caterpie" || name == "caterpie" || name == "3")
  {
    num = 57;
  }
  
  else if(name == "Metapod" || name == "metapod" || name == "4")
  {
    num = 85;
  }
  
  else if(name == "Butterfree" || name == "butterfree" || name == "5")
  {
    num = 113;
  }
  
  else if(name == "Paras" || name == "paras" || name == "6")
  {
    num = 141;
  }
  
  else if(name == "Parasect" || name == "parasect" || name == "7")
  {
    num = 169;
  }
  
  else if(name == "Tangela" || name == "tangela" || name == "8")
  {
    num = 197;
  }
  
  else if(name == "Pinsir" || name == "pinsir" || name == "9")
  {
    num = 225;
  }
   
  else if(name == "Pikachu" || name == "pikachu" || name == "26")
  {
    num = 253;
  }
  else if(name == "Raichu" || name == "raichu" || name == "27")
  {
    num = 281;
  }
  
  else
  {
    cout << "Invalid input. Returning to the main menu." << endl;
    menu();
  }
  
  return num;
}
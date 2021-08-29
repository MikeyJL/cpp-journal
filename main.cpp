/**
 * @author Mikey Lau
 * Github: MikeyJL
 * Twitter: mikeylau_uk
 * Website: https://mikeylau.uk
 **/

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

/**
 * Creates a prompt of options.
 * @returns The CHAR option value.
 **/
char selectOptions () {
  cout << "\n*** Journal ***\n" << endl;
  cout << "Select an option:" << endl;
  cout << "  a -> Create a new entry" << endl;
  // TODO: Viewing
  // TODO: Deleting
  cout << ">>> ";

  char option;
  cin >> option;
  cin.ignore();

  return option;
}

/**
 * Prompts the user for a 'name' and 'content' to create the new entry.
 **/
void createEntry ()
{
  ofstream file;
  string name, content;

  cout << "\n*** Creating a new entry ***\n" << endl;

  cout << "Please enter a name:" << endl;
  cout << ">>> ";
  getline(cin, name);
  cout << endl;

  cout << "\nPlease make the entry:" << endl;
  cout << ">>> ";
  getline(cin, content);
  cout << endl;

  file.open("entries/" + name + ".txt");
  file << content;
  file.close();
}

int main () {

  char option;
  option = selectOptions();

  switch (option)
  {
    case 'a':
    {
      createEntry();
      break;
    }
    // TODO: Viewing
    // TODO: Deleting
  }
  return 0;
}

// This program will allow the user to input from the keyboard
// what the last word in the following proverb should be:
// "Now is the time for all good men to come to the aid of their ________."

// Sarah Bender

#include <iostream>
#include <string>
using namespace std;

void writeProverb(string word);

int main()
{
  string wordChoice;

  cout << "Given the phrase:" << endl;
  cout << "Now is the time for all good men to come to the aid of their ___." << endl;
  cout << "Please input the word you would like to have finish the proverb." << endl;
  cin >> wordChoice;
  cout << endl;
  writeProverb(wordChoice);

  return 0;
}

// ****************************************************************************
//                                 writeProverb
//
// task: This function prints a proverb. The user will be able to decide
//       what the proverb prints by typing it, which will be placed into
//       the call. 
// data in: code for ending word of proverb (integer)
// data out: no actual parameter altered
//
// ****************************************************************************

void writeProverb(string word)
{
  cout << "You chose:" << endl;
  cout << "Now is the time for all good men to come to the aid of their " << word << "." << endl;
}

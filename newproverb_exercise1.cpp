// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ________."
// Inputting a 1 will use the word party. Any other number will use the word country. 

// Sarah Bender

#include <iostream>
#include <string>
using namespace std;

void writeProverb(int number);

int main()
{
  int wordCode;

  cout << "Given the phrase:" << endl;
  cout << "Now is the time for all good men to come to the aid of their ___." << endl;
  cout << "Input a 1 if you want the sentence to be finished with party." << endl;
  cout << "Input any other number for the word country." << endl;
  cout << "Please input your choice now." << endl;
  cin >> wordCode;
  cout << endl;
  writeProverb(wordCode);

  return 0;
}

// ****************************************************************************
//                                 writeProverb
//
// task: This function prints a proverb. The function takes a number
//       from the call. If that number is a 1 it prints "Now is the time
//       for all good men to come to the aid of their party."
//       Otherwise, it prints "Now is the time for all good men
//       to come to the aid of their country."
// data in: code for ending word of proverb (integer)
// data out: no actual parameter altered
//
// ****************************************************************************

void writeProverb(int number)
{
  if (number != 1)
  {
    cout << "You chose:" << endl;
    cout << "Now is the time for all good men to come to the aid of their country." << endl;
  }
  else
  {
    cout << "You chose:" << endl;
    cout << "Now is the time for all good men to come to the aid of their party." << endl;
  }
}

// What happens if you enter a float such as -3.97? 
// The float will be truncated, meaning anything after the decimal point will be removed. In this case, the program will print "country." However, if you use a decimal with a 1 before the decimal place, it will print "party."

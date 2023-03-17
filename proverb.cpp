// This program prints the proverb
// "Now is the time for all good men to come to the aid of their party"
// in a function (procedure) called writeProverb that is called by the main function

// Sarah Bender

#include <iostream>
using namespace std;

void writeProverb();  // This is the prototype for the writeProverb function

int main()
{
  writeProverb();

  return 0;
}

// *******************************************
//                 writeProverb
//
// task: This functions prints a proverb
// data in: none
// data out: no actual parameter altered
//
// *******************************************

void writeProverb()
{
  cout << "Now is the time for all good men to come to the aid of their party." << endl;
}

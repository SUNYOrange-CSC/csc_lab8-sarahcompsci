#include <iostream>
#include <iomanip>
using namespace std;

// Sarah Bender

void normalizeMoney (float& dollars, int cents = 150);
// This function takes cents as an integer and converts it to dollars
// and cents. The default value for cents is 150 which is converted
// to 1.50 and stored in dollars.

int main()
{
  int cents;
  float dollars;

  cout << setprecision(2) << fixed << showpoint; 

  cents = 95;
  cout << "\n We will now add 95 cents to our dollar total.\n";

  normalizeMoney (dollars, cents);

  cout << "Converting cents to dollars resulted in " << dollars << " dollars.\n";

  cout << "\n We will now add 193 cents to our dollar total.\n";

  normalizeMoney (dollars, cents = 193);

  cout << "Converting cents to dollars resulted in " << dollars << " dollars.\n";

  cout << "\n We will now add the default value to our dollar total.\n";

  normalizeMoney (dollars, cents = 150);

  cout << "Converting cents to dollars resulted in " << dollars << " dollars.\n";

  return 0;
}

// **********************************************************************************
//                                     normalizeMoney
//
// task:     This function is given a value in cents. It will convert cents
//           to dollars and cents which is stored in a local variable called 
//           total which is sent back to the calling function through the 
//           parameter dollars. It will keep a running total of all the money 
//           processed in a local static variable called sum.
//
// data in:  cents which is an integer
// data out: dollars (which alters the corresponding actual parameter)
//
// **********************************************************************************

void normalizeMoney (float& dollars, int cents)
{
  float total = 0;
  static float sum = 0.0;

  dollars = cents / 100.0;

  total = total + dollars;
  sum = sum + dollars;

  cout << "We have added another $" << dollars << " to our total." << endl;
  cout << "Our total so far is $" << sum << endl;

  cout << "The value of our local variable total is $" << total << endl;
}

// EXERCISE ONE
// I think the first section will print as all $0.95 with the total so far being the same. I think the second section will print $1.93 with the total so far being $2.88. I think the third section will print as $1.50 with the total so far being $4.38.

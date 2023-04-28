#include <iostream>
using namespace std;

// Sarah Bender

float milesToKilos (float miles);
float kilosToMiles (float kilos);

int main()
{
  int choice = 0;
  float miles;
  float kilos;

  while (choice != 3)
  {
    cout << "Please input" << endl;
    cout << "1: Convert miles to kilometers" << endl;
    cout << "2: Convert kilometers to miles" << endl;
    cout << "3: Quit" << endl;
    cin >> choice;

    if (choice == 1)
    {
      cout << "Please input the miles to be converted" << endl;
      cin >> miles;

      milesToKilos (miles);

      cout << miles << " miles = " << milesToKilos (miles) << " kilometers" << endl;
    }
    else if (choice == 2)
    {
      cout << "Please input the kilometers to be converted" << endl;
      cin >> kilos;

      kilosToMiles (kilos);

      cout << kilos << " kilometers = " << kilosToMiles (kilos) << " miles" << endl;
    }
    else if (choice == 3) 
    {
      cout << "Thank you. Goodbye." << endl;
    }
    else
    {
      cout << "Please input a valid number from the menu." << endl;
    }
  }

  return 0;
}

// *********************************************************************************
//                                   milesToKilos
//
// task:     This function takes a given number of miles and converts them
//           to kilometers
// data in:  miles
// data out: kilometers
//
// *********************************************************************************

float milesToKilos (float miles) 
{
  return miles * 1.61;
}

// *********************************************************************************
//                                   kilosToMiles
//
// task:     This function takes a given number of kilometers and converts them
//           to miles
// data in:  kilometers
// data out: miles
//
// *********************************************************************************

float kilosToMiles (float kilos)
{
  return kilos * 0.621;
}

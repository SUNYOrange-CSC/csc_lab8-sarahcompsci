// This program will take miles traveled and hours 
// spent in travel and determine the average miles
// per hour.

//Sarah Bender

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
void calculateMPH(float, int, float&);

int main()
{
  // Initializes variables for miles, hours, 
  // and average miles per hour.
  float miles;
  int hours;
  float milesPerHour;

  // Formatting for output
  cout << setprecision(2) << fixed;

  cout << "Please input the miles traveled." << endl;
  cin >> miles;

  cout << "Please input the hours traveled." << endl;
  cin >> hours;

  calculateMPH(miles, hours, milesPerHour);

  cout << "Your speed is " << milesPerHour << " miles per hour." << endl;

  return 0;
}

// **************************************************
//                   calculateMPH
// task: This function takes the miles and hours
//       traveled and calculates the average miles
//       per hour.
// data in: miles and hours traveled
// data out: average miles per hour
// **************************************************

void calculateMPH(float milesTraveled, int hoursTraveled, float& mph)
{
  mph = milesTraveled / hoursTraveled;
}

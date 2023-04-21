#include <iomanip>
#include <iostream>
using namespace std;

// This program will demonstrate the scope rules.

// Sarah Bender

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float &);
void findCircumference(float, float &);

int main() {
  cout << fixed << showpoint << setprecision(2);
  float radius = 12;

  cout << "Main function outer block" << endl;
  cout << "The identifers that are active here are PI, RATE, and radius."
       << endl
       << endl;

  {
    float area;
    cout << "Main function first inner block" << endl;
    cout << "The identifers that are active here are PI, RATE, radius, and area." << endl << endl;

    findArea(radius, area);

    cout << "The radius = " << radius << endl;
    cout << "The area = " << area << endl << endl;
  }

  {
    float radius = 10;
    float circumference;

    cout << "Main function second inner block" << endl;
    cout << "The identifers that are active here are PI, RATE, radius, and circumference." << endl << endl;

    findCircumference(radius, circumference);

    cout << "The radius = " << radius << endl;
    cout << "The circumference = " << circumference << endl << endl;
  }

  cout << "Main function after all the calls" << endl;
  cout << "The identifiers that are active here are PI, RATE, and radius." << endl << endl;

  return 0;
}

// **************************************************
//
//                     findArea
// task: This function finds the area of a circle
//       given its radius.
// data in: radius of a circle
// data out: answer (which alters the corresponding
//           actual parameter)
//
// **************************************************

void findArea(float rad, float &answer) {
  cout << "Area function" << endl << endl;
  cout << "The identifiers that are active here are PI, RATE, rad, and answer." << endl << endl;

  answer = PI * (rad * rad);
}

// **************************************************
//
//                 findCircumference
// task: This function finds the circumference of
//       a circle given its radius.
// data in: radius of a circle
// data out: distance (which alters the
//           corresponding actual parameter)
//
// **************************************************

void findCircumference(float length, float &distance) {
  cout << "Circumference function" << endl << endl;
  cout << "The identifiers that are active here are PI, RATE, length, and distance." << endl << endl;

  distance = 2 * PI * length;
}

// EXERCISE ONE
// Global variables:
// PI and RATE
// Main variables:
// PI, RATE, and radius
// Main (inner 1) variables:
// PI, RATE, radius, and area
// Main (inner 2) variables:
// PI, RATE, radius, and circumference
// Area variables:
// PI, RATE, rad, and answer
// Circumference variables:
// PI, RATE, length, and distance

// EXERCISE FOUR
// I expect the value for radius that is passed to the findArea function will be 12. I expect that the value for radius that is passed to the findCircumference function will be 10. As such, I expect that the area will be 452.16 and the circumference will be 62.80. 

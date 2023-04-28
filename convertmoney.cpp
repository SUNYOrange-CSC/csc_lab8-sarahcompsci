#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency

// Sarah Bender

// Prototypes of the functions
void convertMulti (float dollars, float& euros, float& pesos);
void convertMulti (float dollars, float& euros, float& pesos, float& yen);
float convertToYen (float dollars);
float convertToEuros (float dollars);
float convertToPesos (float dollars);

int main()
{
  float dollars;
  float euros;
  float pesos;
  float yen;

  cout << fixed << showpoint << setprecision(2);

  cout << "Please input the amount of American Dollars you want converted " << endl;
  cout << "to euros and pesos." << endl;
  cin >> dollars;

  convertMulti (dollars, euros, pesos);

  cout << "$" << dollars << " converted to euros is " << euros << " euros." << endl;
  cout << "$" << dollars << " converted to pesos is " << pesos << " pesos." << endl;

  cout << "Please input the amount of American Dollars you want converted\n";
  cout << "to euros, pesos, and yen." << endl;
  cin >> dollars;

  convertMulti (dollars, euros, pesos, yen);

  cout << "$" << dollars << " converted to euros is " << euros << " euros." << endl;
  cout << "$" << dollars << " converted to pesos is " << pesos << " pesos." << endl;
  cout << "$" << dollars << " converted to yen is " << yen << " yen." << endl;

  cout << "Please input the amount of American Dollars you want converted\n";
  cout << "to yen." << endl;
  cin >> dollars;

  convertToYen (dollars);

  cout << "$" << dollars << " convnerted to yen is " << convertToYen (dollars) << " yen." << endl;

  cout << "Please input the amount of American Dollars you want converted\n";
  cout << "to euros." << endl;
  cin >> dollars;

  convertToEuros (dollars);

  cout << "$" << dollars << " converted to euros is " << convertToEuros (dollars) << " euros." << endl;

  cout << "Please input the amount of American Dollars you want converted\n";
  cout << "to pesos." << endl;
  cin >> dollars;

  convertToPesos (dollars);

  cout << "$" << dollars << " converted to pesos is " << convertToPesos (dollars) << " pesos." << endl;

  return 0;
}

// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly

// ********************************************************************************
//                                   convertMulti
//
// task:     This function takes a dollar value and converts it to euros
//           and pesos
// data in:  dollars
// data out: euros and pesos
//
// ********************************************************************************

void convertMulti (float dollars, float& euros, float& pesos)
{
  euros = dollars * 1.06;
  pesos = dollars * 9.73;
}

// ********************************************************************************
//                                   convertMulti
//
// task:     This function takes a dollar value and converts it to euros
//           pesos and yen
// data in:  dollars
// data out: euros pesos yen
//
// ********************************************************************************

void convertMulti (float dollars, float& euros, float& pesos, float& yen)
{
  euros = dollars * 1.06;
  pesos = dollars * 9.73;
  yen = dollars * 124.35;
}

// ********************************************************************************
//                                   convertToYen
//
// task:     This function takes a dollar value and converts it to yen
// data in:  dollars
// data out: yen
//
// ********************************************************************************

float convertToYen (float dollars) 
{
  return dollars * 124.35;
}

// ********************************************************************************
//                                 convertToEuros
//
// task:     This functions takes a dollar value and converts it to euros
// data in:  dollars
// data out: euros
//
// ********************************************************************************

float convertToEuros (float dollars)
{
  return dollars * 1.06;
}

// ********************************************************************************
//                                 convertToPesos
//
// task:     This function takes a dollar value and converts it to pesos
// data in:  dollars
// data out: pesos
//
// ********************************************************************************

float convertToPesos (float dollars)
{
  return dollars * 9.73;
}

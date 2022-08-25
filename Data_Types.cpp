#include <iostream>
#include <string>
using namespace std;
/* This is a continuation of Varibles file, but in this file we will going futher with Data Types */
int main() {
  //Create Variables
  int Num = 1997;                      // Integer (whole number)
  float FloatNum= 3.14515;              // Floating point number
  double DNum = 3.14159265358979323846; // Floating point number
  char letter = 'M';       // Character, use sigle quotes (' ')
  bool Bool = true;        // Boolean value, will return 1 or 0
  string Text= "Bazinga";  // String, use double quotes (" ")
  /* A few comments before proceed, the main difference between float/double is the precision, 
float has six/seven decimal digits, while double have 15 digits. 
Therefore it is safer to use double for most calculations
  Other difference is */
  // Let's check this differences:
  float  f1= 35e3; // an "e" to indicate the power of 10
  double d1= 12e4;
  // The char store a single character, but can use ASCII
  char a=65, b=66, c=67; 
  // To use string we must import the library
  // Print variable values
  
  
  cout << "int: "    << Num      << "\n";
  cout << "float: "  << FloatNum << "\n";
  cout << "double: " << DNum     << "\n";
  cout << f1  <<"\n";
  cout << d1  <<"\n";
  cout << "char: "   << letter   << "\n";
  cout <<a; 
  cout <<b;
  cout <<c;
  cout << "\n"; 
  cout << "bool: "   << Bool     << "\n";
  cout << "string: " << Text     << "\n";
  return 0;
}
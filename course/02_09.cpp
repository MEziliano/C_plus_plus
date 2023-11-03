// Learning C++
// Type Casting 
// Specifying how to  interpret a piece of dat; Useful for converting data type
// for example int32_t or float
// Syntax: (uint32_t) (expression) ;

#include <iostream>
#include <cstdint>

using namespace std;

float flt = -7.44f; // f stands for float constant
int32_t sgn;
uint32_t unsgn;


int main(){
    sgn = flt; // casting
    unsgn = sgn;

    cout << "Float:  " << flt << endl;
    cout << "int32:  " << sgn << endl;
    cout << "unit32: " << unsgn << endl;



    // Convert fahrenheit to Celsius
    int fahrenheit = 100;
    int celsius;

    celsius = ((float) 5 / 9.0) * (fahrenheit - 32); 
    cout << endl;
    cout << "Fahrenheit:" << fahrenheit<< endl;
    cout << "Celsius:   " << celsius << endl;

    float weight = 10.99;
    cout << endl;
    cout << "Float:          " << weight << endl;
    cout << "Integer part:   " << (int)weight << endl;
    cout << "Fractional part:" << (int)(weight - (int)weight) << endl;


    return(0);
}
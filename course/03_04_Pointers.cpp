/*
    In the course it will cover the simple pointers. 
    It is necessary to storage memory. 
    Pointers are variables themselves. 
*/
#include <iostream>
#include <string>
using namespace std;

int a = 37;
int * ptr;

int main(){
    ptr = &a;

    cout << "The content of a is        " << a << endl;
    cout << "ptr is pointing to address " << ptr << endl;
    cout << "The address of a is        "  << &a << endl;
    cout << "Where ptr is pointing, we have " << *ptr << endl; // Not a string
    cout << "The address of ptr is " << &ptr << endl;
    cout << endl;


    return (0);
}
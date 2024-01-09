/*  
    Container of heterogeneous data members
    Useful for implementing simple models
    Structures are also available for C
*/ 
#include <iostream>
#include <string>

using namespace std;

// Declaring the 
enum cow_propose {dairy, meat, hide, pet};

//Defining the structure
struct cow{
    string name;
    int age; 
    unsigned char purpose;
};

int main(){
    cow my_cow;
    my_cow.age   = 5;
    my_cow.name  = "Betsy";
    my_cow.purpose = dairy;

    cout << my_cow.name << "is a type-" <<(int)my_cow.purpose << " cow."<< endl;
    cout << my_cow.name << "is " << my_cow.age << " years old." << endl;
    return (0);
}
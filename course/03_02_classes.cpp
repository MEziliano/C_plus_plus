/* 
    Basic elements of object-oriented programming
    Useful for implementing models
    Contain data and function members
    The same as Java or Python classes
*/

/* What is the diferencen between a class and a strcut? 

    In C++, a class is a user-defined data type that can contain member variables (data) and member functions (functions that operate on the data). A class in C++ can have single or multiple inheritance, providing code reusability and efficient memory utilization.
    EXAMPLE
    class MyClass {
   public:       // Access specifier 
    int myNum;   // Data member 
    string myString; // Data member 

    void printInfo() {   // Member function 
       cout << "Number: " << myNum << endl;
       cout << "String: " << myString << endl;
        }
    };


    On the other hand, a struct in C++ is similar to a class. However, by default, the access specifier for a struct is public, whereas for a class, it is private. Apart from this, both class and struct can contain member variables and member functions.

    struct MyStruct {
    int myNum;    // Data member 
    string myString; // Data member 

    void printInfo() { // Member function 
       cout << "Number: " << myNum << endl;
       cout << "String: " << myString << endl;
        }
    };
*/

/*  
    Container of heterogeneous data members
    Useful for implementing simple models
    Structures are also available for C
*/ 
#include <iostream>
#include <string>

using namespace std;

// Declaring the purpose 
enum cow_propose {dairy, meat, hide, pet};

//Switch to class
class cow{
    public:
    cow(string name_i, int age_i, unsigned char purpose_i){
        name =  name_i;
        age =age_i;
        purpose = purpose_i;
    }
    string get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
    unsigned char get_purpose(){
        return purpose;
    }
    void set_age(int new_age){
        age=new_age;
    }
    private: // Try to keep private always when it's possible 
        string name;
        int age; 
        unsigned char purpose;
};

// some values are unvailable, it need to change 
int main(){
    cow my_cow("Hildy",7,pet);

    cout << my_cow.get_name() << " is a type- " <<(int)my_cow.get_purpose() << " cow."<< endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    return (0);
}
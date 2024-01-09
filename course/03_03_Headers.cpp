/*
    (Complier) C++ Source File >> (Assembler) Assembly File  }} Assembly File >> (Linker) Object File [Executable Binary File]

    Header files has .h extensions

    Implementation and HEader File
    Header files contain class definition and function declarations
    Implementation files contain executable code; files must include their header files;
    The code shoul only include the header file, must be compile
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
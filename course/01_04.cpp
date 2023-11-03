// Learning C++ 
// Challenge 01_04 - INput and Output
// Console Interaction

#include <iostream>
#include <string>

using namespace std;

//   Problem tips
//  int main(){
//     string str;
//     cin >> str;
//     cout << str;
//     return(0);
//  }
// My answer 
using namespace std;
// int main(){
//    string x;
//    cout <<"Please, write your name ";
//    cin >> x;
//    cout<< "Your name is: " << x;
//    return 0;
// }
// Instructor answer
int main(){
   string str;
   cout << "Please, insert your name ";
   cin  >> str;
   cout << "Nice to meet you, " << str << "!" << endl;
   return (0);
}
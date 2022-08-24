#include <iostream>
using namespace std;
/*
If we use cout  statement to output, we can use cin to input, let's check out
*/
int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; //Get user input from the keyboard
  cout << "Your number is: " << x;
  return 0;
}

/*
Interesting thing:
cout == "see-out" use insertion operator <<
cin  == "see-in" use extraction operator >>
*/

int main(){
  int x,y;
  int sum;
  cout << "Type a number: ";
  cin  >> x;
  cout << "Type another number: ";
  cin  >> y;
  sum = x+y;
  cout << "The Sum is: " << sum;
  return 0;
}




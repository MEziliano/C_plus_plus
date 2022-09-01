#include <iostream>
using namespace std;

int main() { /* initialization expression;
while (test_expression)
{
   // statements
 
  update_expression;
}*/
  int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++;
  }
  return 0;
} 
/* The snipet above runs a whhile loop, let's check the other two loops*/

#include <iostream>
using namespace std;
 
int main()
{
  /* for (initialization expr; test expr; update expr)
{    
     // body of the loop
     // statements we want to execute
}*/
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hello World\n";
    }
 
    return 0;
}

int main(){
  /* initialization expression;
do
{// statements
   update_expression;
} while (test_expression);*/
    int i = 2; // Initialization expression
    do
    {
        // loop body
        cout << "Hello World\n";
 
        // update expression
        i++;
    }  while (i < 1);   // test expression
 
    return 0;
}
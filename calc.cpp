/*

  Reverse Polish Notation Calculator implementation

*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float first, second;
  char operation;

  cout << "First number:  ";
  cin >> first;
  cout << "Second number: ";
  cin >> second;
  cout << "Operation: ";
  cin >> operation;

  float result;

  if(operation == '+'){
    result = first + second;
  } 
  else if(operation == '-'){
    result = first - second;
  }
  else if(operation == '*'){
    result = first * second;
  }
  else if(operation == '^'){
    result = pow(first, second);
  }
  else if(second == 0 && operation == '/'){
    cout << "na zero nizia" << endl;
    exit(0);
  }
  else if(operation == '/'){
    result = first / second;
  } else 
  {
    cout << "Wrong input.";
    exit(0);
  }

  cout <<"Result: " << result << endl;
  return 0;
}
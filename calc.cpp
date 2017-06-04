/*

  Reverse Polish Notation Calculator implementation

*/
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]){
  ifstream file(argv[1]);
  if(!file.is_open()){
    cerr << "File failed to open" << endl;
  }else{
  
    string enter, First, Second, operation;

    getline(file,enter, ' ');
    getline(file,First); 
    float first = stof(First);
    getline(file,enter, ' ');
    getline(file,Second); 
    float second = stof(Second);
    getline(file,enter, ' ');
    getline(file,operation);
    float result;

    cout << first << " " << operation<< " " << second << endl;
    
   switch(operation.front()){
      case '+':
      {
        result = first + second;
        break;
      } 
      case '-':
      {
        result = first - second;
        break;
      }
      case '*':
      {
        result = first * second;
        break;
      }
      case '^':
      {
        result = pow(first, second);
        break;
      }
      case '/':
      {
        result = first / second;
        break;
      } 
      default:
      {
        cout << "Wrong input.";
        exit(0);
        }
    }

    if(second == 0 && operation.front() == '/'){
        cout << "na zero nizia" << endl;
        exit(0);
      }

    cout <<"Result: " << result << endl;
    
    return 0;

  }
}
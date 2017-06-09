/*

  Reverse Polish Notation Calculator implementation

*/
#include <iostream>
#include <string>
#include <fstream>
#include <stack>
#include <cmath>
#include <sstream> //make use of a class called istringstream
using namespace std;


int main(int argc, char *argv[]){
  stack <float> st;
  string s;
  float num;
  float first, second;
  string operation;
  float result;



  ifstream file(argv[1]); 

  if(!file.is_open()){
    cerr << "File failed to open"<< endl;
    cout << "Input: " << endl;;
  
    while (true){
      cin >> s;

      if(istringstream(s) >> num){
        st.push(num);
       
      } else if(s == "-" ||s == "+" ||s == "/" ||s == "*" || s == "^"){
        second = st.top();
        st.pop();
        first = st.top();
        st.pop();

        switch(s.front()){
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
            if(second == 0){
              cout << "na zero nizia" << endl;
              exit(0);
            }
            result = first / second;
            break;
        }
        st.push(result);
      }
     }else if(s == "="){
       cout << result << endl;
       exit(0);
     }  
    }
    
    

    /*cout << "Try enter first number:  ";
    cin >> first;
    cout << "Enter second number:  ";
    cin >> second;
    cout << "Enter operation: ";
    cin >> operation;*/
  } /*else{
    string enter, one, two;
    
    getline(file,enter, ' ');
    getline(file,one); 
    first = stof(one);
    getline(file,enter, ' ');
    getline(file,two); 
    second = stof(two);
    getline(file,enter, ' ');
    getline(file,operation);
    
    file.close();
  }
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
        if(second == 0){
          cout << "na zero nizia" << endl;
          exit(0);
        }
        result = first / second;
        break;
      } 
      default:
      {
        cout << "Wrong input.";
        exit(0);
      }
    }
    cout <<"Result: " << result << endl;*/
    return 0;
}
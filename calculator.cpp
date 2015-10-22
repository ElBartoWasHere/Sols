#include <iostream>
using namespace std;

float add(float a, float b)
{
  // Implement a formula that will add a and b, and then return the result
  return (a+b);
}

float substract(float a, float b)
{
  // Implement a formula that will substract a and b, and then return the result
  return (a-b);
}

float multiply(float a, float b)
{
  // Implement a formula that will multiply a and b, and then return the result
  return (a*b);
}

float divide(float a, float b)
{
  // Implement a formula that will divide a and b, and then return the result
  if(b == 0)
  {
    cout << "Cannot divide by 0" << endl;
    return a;
  }
  else
    return (a/b);
}

int main ()
{
  
  // Find a way to constantly keep reading inputs and displaying results until user exits
  float result = 0;
  char operand = '0';
  float newNumber = 0;
  
  while(operand != '!')
  {
  
    //cout << "Please enter new number: ";
    
    if(result == 0)
    {
      cout << "Please enter new number: ";
      cin >> result;
    }
    //else
    //  cin >> newNumber;
  
    cout << "Please enter operand, add(+), sub(-), mul(*), div(/), or exit(!): ";
    cin >> operand;
  
    switch (operand) 
    {
      case '+':
        cout << "Please enter new number: ";
        cin >> newNumber;
        result = add(result, newNumber);
        break;
      case '-':
        cout << "Please enter new number: ";
        cin >> newNumber;
        result = substract(result, newNumber);
        break;
      case '*':
        cout << "Please enter new number: ";
        cin >> newNumber;
        result = multiply(result, newNumber);
        break;
      case '/':
        cout << "Please enter new number: ";
        cin >> newNumber;
        result = divide(result, newNumber);
        break;
      case '!':
        cout << "Bye Bye";
        break;
      default:
        cout << "Wrong operator" << endl;
    }
    
    newNumber = 0;
    if(operand != '!')
      cout << result << endl;
    
  }
  return 0;
}

#include <iostream>
using namespace std;

int userInput=0;

int fibonacci(int iterations)
{
  // Here we will do all the sneaky math behind the fibonacci algorithm
  if(iterations < 1)
  {
      cout << "Number not valid" << endl;
      return 0;
  }
  else if(iterations == 1)
  {
      return 1;
  }
  else if(iterations == 2)
  {
      return 2;
  }
  else
  {
      return (fibonacci(iterations-1)+fibonacci(iterations-2));
  }

}

int main ()
{
  
  // Here we will run iterations until the number of iterations is satisfied
  while(userInput != -1)
  {
    cout << "Please enter a number above 0, or enter -1 to exit" << endl;
    cout << "Number of iterations: ";
    cin >> userInput;
    if(userInput != -1)
    {
        cout << "Fibonacci result: " << fibonacci(userInput) << endl;
    }
  }
  
  cout << "Bye! Bye!" << endl;
  
  return 0;
}

//#include <stdlib.h>
#include <iostream>
//#include <time.h>

using namespace std;

int main()
{

  srand(time(NULL));
  int number = rand()%50;
  int guess;
  int count = 0;
  
  while(guess != number && count < 8)
  {
    cout << "Gues numbah: ";
    cin >> guess;
    
    if(guess > number)
      cout << "Little high" << endl;
     
    if(guess < number)
      cout << "Little low" << endl;
    
    count++;
  }
  
  if(guess == number)
    cout << "You won\'t guess next time!!! You\'ll see!!! Bwahahahahahaha!!!!" << endl;
  else
    cout << "You are not a genius like me!!!!" << endl;
  
  return 0;
}

#include<iostream>
using namespace std;

int main()
{
  int i=0;
  cout << "Would you be so kind to specify how many numbers you wish to store? ";
  cin >> i;
  int array[i];
  
  cout << "Please insert the numbers you desire to store: ";
  for(int x=0; x<i; x++)
  {
    cin >> array[x];
  }
  
  for(int x=0; x<i; x++)
  {
    cout << array[x] << endl;
  }
  
  return 0;
}

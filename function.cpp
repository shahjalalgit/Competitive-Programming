// function example
#include <iostream>
using namespace std;

int subtraction (int a, int b)
{
  int r;
  r=a-b;
  return r;
}

// default values in functions
int divide (int a, int b=2)
{
  int r;
  r=a/b;
  return (r);
}

// Recursivity factorial
long factorial (long a)
{
  if (a > 1)
   return (a * factorial (a-1));
  else
   return 1;
}


int main ()
{
  int x=5, y=3, z;
  z = subtraction (7,2);
  cout << "The first result is " << z << '\n';
  cout << "The second result is " << subtraction (7,2) << '\n';
  cout << "The third result is " << subtraction (x,y) << '\n';
  z= 4 + subtraction (x,y);
  cout << "The fourth result is " << z << '\n';

  cout << divide (12) << '\n';
  cout << divide (20,4) << '\n';


  long number = 9;
  cout << number << "! = " << factorial (number);
}
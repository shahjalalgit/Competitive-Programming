// countdown using a for loop
#include <iostream>
using namespace std;

int main ()
{
  for (int n=10; n>0; n--) {
    cout << n << ", ";
  }
  cout << "liftoff!\n";
  for (int n=0, i=100 ; n!=i ; ++n, --i ){
      cout<< n << "-" << i <<endl;
  }
  int n=10;
  mylabel:
  cout << n << ", ";
  n--;
  if (n>0) goto mylabel;
  cout << "liftoff!\n";
}
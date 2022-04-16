#include <iostream>
using namespace std;

#define PI 3.14159
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("\nThe number is: %d",a );
    
    string str;
    cout<< "\nEnter Hello World! 2 times.\n";
    // cin>> str; // cout cant not print string after space.
    cin.ignore();
    getline(cin, str);
    cout<< str << endl;
    printf("%s", str.c_str());  // .c_str() => use for conver into C programming string.

    double r=5.0;               // radius
    double circle;

    circle = 2 * PI * r;
    cout << circle;
     
    cout << "\nCircle: " << circle << " . This is the circle area!" << endl;
    
    return 0;
}
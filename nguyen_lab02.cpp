// Anthony Nguyen
// CPSC 120-19
// Lab 02
// Calculating square root from user input

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Variables
    int a;

    //Asks user for number
    cout << "Please enter in a number: ";
    cin >> a;

    //Square root of a from user input
    double b = sqrt(a);

    //Output square root of a
    cout << "The square root of " << a << " is: " << b << endl;

    return 0;
}

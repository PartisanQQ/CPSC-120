// Anthony Nguyen
// CPSC 120-19
// HW 02
// Bonus: Yes
// Pythagorean Theorem

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Variables
    double a, b, c;

    //Input for first side of triangle
    cout << "Enter in a: ";
    cin >> a;

    //Input for second side of triangle
    cout << "Enter in b: ";
    cin >> b;

    //Calculating C
    c = sqrt(pow(a, 2) + pow(b, 2));

    //Output third side
    cout << "c is: " << c << endl;

    return 0;
}

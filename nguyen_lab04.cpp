//Anthony Nguyen
//CPSC 120-19
//Lab 04
//Desc: Multiples of 3 and 5

#include <iostream>
using namespace std;

int main()
{
    //Variables
    int maxValue;
    int totalValue;

    //Asking for max value to sum
    cout << "Multiples of 3 and 5" << endl;
    cout << "====================" << endl;
    cout << "Enter in a max value, and we'll sum up all multiples of 3 and 5." << endl;
    cout << "Max Value: ";
    cin >> maxValue;

    //Summing multiples of 3 and 5 less than max value input by user
    for(int i = 0; i < maxValue; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            totalValue = totalValue + i;
        }

    }

    //Display summation
    cout << "Answer: " << totalValue << endl;

    return 0;
}

//Anthony Nguyen
//CPSC 120-19
//HW 04
//Bonus: Yes
//Desc: Even Fibonacci Numbers

#include <iostream>
using namespace std;

int main()
{
    //Variables
    unsigned int fibNum;
    int a = 1;
    int b = 2;
    int c = a + b;
    unsigned int total = 2;

    //Asking for Fibonacci number
    cout << "Number for Fibonacci sequence: ";
    cin >> fibNum;

    //Calculations
    while(c < fibNum)
    {
        //Summation of even numbers
        if(c % 2 == 0)
        {
            total = total + c;
        }

        //Calculating next number in Fibonacci sequence
        a = b;
        b = c;
        c = a + b;
    }

    cout << "Total of even numbers: " << total << endl;

    return 0;
}

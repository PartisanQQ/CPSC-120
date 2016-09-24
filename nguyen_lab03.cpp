// Anthony Nguyen
// CPSC 120-19
// Lab 03
// Desc: Monty Hall Gameshow

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main()
{
    // Variables
    double userChoice;
    int doorCar;

    //Statements
    cout << "Welcome to Let’s Make a Deal!" << endl;
    cout << "=============================" << endl;
    cout << "Behind one of these 3 doors is a brand new car!" << endl;
    cout << "Behind the other two are goats. Guess the door with the hidden car and you win!" << endl << endl;
    cout << "Choose a door: ";
    cin >> userChoice;

    //Random generation for car
    srand(time(NULL));
    doorCar = rand()%3+1;

    //Output based on user choice
    if (userChoice == doorCar)
    {
        cout << "You chose door number " << doorCar << ", revealing a brand new car!" << endl;
    }
    else if (userChoice < 4 && userChoice > 0)
    {
        cout << "You chose door number " << userChoice << ", revealing a goat!" << endl;
    }
    else
    {
        cout << "There are only 3 doors!" << endl;
    }

    return 0;
}

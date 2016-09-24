//Anthony Nguyen
//CPSC 120-19
//Lab 05
//Desc: Functions: Printing Rectangles

#include <iostream>
using namespace std;

//Table of contents
void DrawRectangle(string, int);

int main()
{
    //variables
    string usrWord;
    int wordHeight;
    string usrExit;

    //Draw rectangle function nested within a while loop that will ask the user if they want to continue
    do
    {
        cout << "Enter in a word: ";
        cin >> usrWord;

        cout << "Enter in a height: ";
        cin >> wordHeight;

        //Call the function to draw the rectangle
        DrawRectangle(usrWord, wordHeight);

        //Ask the user if they want to exit
        cout << "Exit? (No to continue): ";
        cin >> usrExit;

    } while (usrExit=="No" || usrExit=="no" || usrExit=="NO" || usrExit=="N" || usrExit=="n");

    return 0;
}

void DrawRectangle(string usrWord, int wordHeight)
{
    for(int i = 0; i < wordHeight; i++)
    {
        cout << usrWord << endl;
    }
}

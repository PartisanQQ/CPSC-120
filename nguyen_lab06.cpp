//Anthony Nguyen
//CPSC 120-19
//Lab 06
//Desc: Reversing Letters

#include <iostream>
using namespace std;

void ReverseLetters(char [], int);

int main()
{
    //storing the entire program in a do-while loop to loop the program indefinitely
    do
    {

    //variables
    int length;

    //ask user for length of word
    cout << "Enter in a word length: ";
    cin >> length;

    cout << "Enter in a word: ";

    //use word length to create an empty array
    //and then store each char of word into array, one letter at a time
    //instead of using cin to store the entire word into one variable
    char letter[length];
    for(int i = 0; i < length; i++)
    {
        cin >> letter[i];
    }

    //call function and pass array and length of array to it
    ReverseLetters(letter, length);

    }while(1 != 0);

    return 0;
}

//function will start at the end of the array and go backwards while
//using cout to "flip" the word around
void ReverseLetters(char letter[], int length)
{
    for(int i = length - 1; i >= 0; i--)
    {
        cout << letter[i];
    }
    cout << endl;
}

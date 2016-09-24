//Anthony Nguyen
//CPSC 120-19
//HW 05
//Desc: Overloading Functions

#include <iostream>
#include <string>
using namespace std;

//Table of contents
void DrawRectangle(string, int);
void DrawRectangle(int, int);

int main()
{
	//variables
	int usrWidth;
	string usrWord;
	int wordHeight;
	string usrExit;

	//Ask user for either a word or a width. If the user input is a width, store
	//that value as such, and call DrawRectangle with different parameters.
	do
	{
		cout << "Enter in a word or a width: ";
		cin >> usrWord;

		cout << "Enter in a height: ";
		cin >> wordHeight;

		if (isdigit(usrWord[0]))
		{
			usrWidth = stoi(usrWord);
			DrawRectangle(usrWidth, wordHeight);
		}
		else
		{
			DrawRectangle(usrWord, wordHeight);
		}

		//Ask the user if they want to exit, otherwise loop
		cout << "Exit?: ";
		cin >> usrExit;

	} while (usrExit == "No" || usrExit == "no" || usrExit == "NO" || usrExit == "N" || usrExit == "n");

	return 0;
}

//This will be called if user inputs a word
void DrawRectangle(string usrWord, int wordHeight)
{
	for (int i = 0; i < wordHeight; i++)
	{
		cout << usrWord << endl;
	}
}

//This will be called if user inputs a width
void DrawRectangle(int usrWidth, int wordHeight)
{
	for (int i = 0; i < wordHeight; i++)
	{
		for (int i = 0; i < usrWidth; i++)
		{
			cout << usrWidth;
		}
		cout << endl;
	}
}

//Anthony Nguyen
//David McClaren
//Lab 10
//10 November 2016

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//variables
	string usr_input;
	ofstream out_file;
	string usr_continue;

	//opening file
	out_file.open("output.txt");

	//storing user input
	do
	{
		cout << "What would you like to record? " << endl;
		getline(cin, usr_input);

		out_file << usr_input << endl;

		cout << "Anything else? (y or n): " << endl;
		getline(cin, usr_continue);

	} while (usr_continue == "y");

	return 0;
}
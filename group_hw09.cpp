//Anthony Nguyen, Devon Hurt, Derrick Huynh, Denyz Melchor
//CPSC 120-19
//HW 09
//Desc: Prime Number Factorization

#include <iostream>
using namespace std;

int main()
{
	unsigned long long int number = 0;

	cout << "Enter number: ";
	cin >> number;

	for (unsigned long long int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
		}
	}

	cout << "Largest Prime Factor: " << number << endl;

	return 0;
}
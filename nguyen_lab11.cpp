//Anthony Nguyen
//David McLaren
//CPSC 120-19
//17 November 2016

#include <iostream>
using namespace std;

void xswap(int * p1, int * p2);

int main()
{
	int foo = 42;
	int bar = foo;
	int *baz = &foo;

	cout << "Task 01 - Values vs. Addresses" << endl;
	cout << "foo: " << foo << " @ " << &foo << endl
		<< "bar: " << bar << " @ " << &bar << endl
		<< "baz: " << baz << " @ " << &baz << endl;
	cout << endl;

	int arr[] = { 5, 10, 15, 20, 25 };
	cout << "Task 02 - Arrays and Pointers, What's the Connection?" << endl;
	cout << "arr[0] = " << arr[0] << endl
		<< "*(arr + 0) = " << *(arr + 0) << endl
		<< "*(arr + 4) = " << *(arr + 4) << endl;
	cout << endl;

	int value01 = 17;
	int value02 = 42;
	cout << "Task 03 - Function Pointers" << endl
		<< "Before swap:" << endl
		<< "value01 = " << value01 << endl
		<< "value02 = " << value02 << endl;
	cout << endl;
	
	xswap(&value01, &value02);
	cout << "After swap:" << endl
		<< "value01 = " << value01 << endl
		<< "value02 = " << value02 << endl;
	cout << endl;

	return 0;
}

void xswap(int * p1, int * p2)
{
	int v1 = *p1;
	int v2 = *p2;

	*p1 = v2;
	*p2 = v1;
}

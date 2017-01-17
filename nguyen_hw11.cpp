//Anthony Nguyen
//David McLaren
//CPSC 120-19
//HW 11
//Desc: Bubble sort

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//prototyping
void read_arr(int * my_array, int size);
void sort_arr(int * my_array, int size);
void print_arr(int * my_array, int size);

int main() {
	//variables
	int my_array[100];
	int size = 100;

	//statements
	read_arr(my_array, size);
	sort_arr(my_array, size);
	print_arr(my_array, size);

	return 0;
}

void read_arr(int * my_array, int size) {
	ifstream in_file;
	in_file.open("in.txt");

	for (int i = 0; i < size; i++) {
		in_file >> my_array[i];
	}
}

void sort_arr(int * my_array, int size) {
	int arr_A = 0;
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			if (my_array[i] > my_array[i + 1]) {
				arr_A = my_array[i];
				my_array[i] = my_array[i + 1];
				my_array[i + 1] = arr_A;
			}
		}
	}
}

void print_arr(int * my_array, int size) {
	for (int i = 0; i < size; i++) {
		cout << my_array[i + 1] << endl;
	}
}
#include <string>
using namespace std;

void displayMenu();
float calcOrder(string, float, int);
void calcTotal(float);

void displayMenu()
{
	cout << "1. Hotdog	 - $1.50" << endl
		<< "2. Popcorn	 - $3.10" << endl
		<< "3. Hot Chocolate - $2.69" << endl
		<< "4. Soft Drink	 - $1.25" << endl << endl
		<< "5. Quit Program" << endl;
}

float calcOrder(string order_name, float order_price, int order_quantity)
{
	cout << "You ordered:" << endl
		<< order_quantity << "x " << order_name << "(s) at $" << order_price << " each." << endl
		<< "Subtotal: $" << order_price * order_quantity << endl;

	return order_price * order_quantity;
}

void calcTotal(float total_price)
{
	cout << fixed << setprecision(2) << showpoint << "Total: $" << total_price + (total_price * 0.08);
}
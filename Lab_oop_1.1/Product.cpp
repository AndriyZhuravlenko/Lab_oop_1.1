#include "Product.h"

double Product::power()
{
	return first * second * 10;
}
void Product::read()
{
	int x;
	double y;
	do
	{
		cout << " Calories per 100 g = "; cin >> x;
		cout << " Product weight = "; cin >> y;
	} while (!init(x, y));
}
void Product::display()
{
	cout << endl;
	cout << " Calories per 100 g = " << get_first() << endl;
	cout << " Product weight = " << get_second() << endl;
}
bool Product::init(int first, double second)
{
	if (first > 0 && second > 0)
	{
		set_first(first);
		set_second(second);
		return true;
	}
	else
		return false;
}
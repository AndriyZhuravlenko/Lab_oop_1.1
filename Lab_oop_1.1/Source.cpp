#include "Product.h"
#include <iostream>
using namespace std;
Product makepower(int x, double y)
{
	Product k;
	if (!k.init(x, y))
	cout << "Wrong arguments to Init!" << endl;
	return k;
}
int main()
{
	Product z;
	z.read();
	z.display();
	cout << "Total calories: " << z.power() << endl;
	int x;
	double y;
	cout << " Calories per 100 g = "; cin >> x;
	cout << " Product weigh = "; cin >> y;
	Product k = makepower(x, y);
	k.display();
	double result = k.power();
	cout << "Total calories: " << result << endl;
	cin.get();
	return 0;
}
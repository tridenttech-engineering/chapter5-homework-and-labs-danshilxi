//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double item1 = 0.0;
	double item2 = 0.0;
	const double halfOff = 0.5;

	cout << "Enter price of item 1: ";
	cin >> item1;
	cout << "Enter price of item 2: ";
	cin >> item2;

	if (item1 < item2)
		item1 = item1 * halfOff;
	else
		item2 = item2 * halfOff;

	cout << "Total owed: " << item1 + item2 << endl;
		
	return 0;

	

	return 0;
}	//end of main function
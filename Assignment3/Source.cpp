// code produced by Martin Siddons.
#include <iostream>

using namespace std;

void exercise()
{
	int numIn = 0;
	while (numIn < 1) //keep asking the user for a integer greater than 0.
	{
		cout << "Starting point (integer greater than zero) > "; 
		cin >> numIn;
	}
	while (numIn != 1) //while the number is greater than 1...
	{
		cout << numIn << " "; //print the number generated from the user or the last loop.
		if (numIn % 2 == 0) //if the number is even, divide it by 2.
			numIn = numIn / 2;
		else
			numIn = numIn * 3 + 1; //otherwise, multiply by 3 and add 1.
	}
	cout << "1" << endl << endl; //if the user enters '1', the answer is 1.
}

int main()
{
	char again = '0';
	exercise();
	while (again != 'n')
	{
		cout << "Do you want to start again? (y/n) > ";
		cin >> again;
		switch (again)
		{
		case 'n': case 'N':
			return 0;
			break;
		case 'y': case 'Y':
			exercise();
			break;
		default:
			break;
		}
	}
	return 0;
}
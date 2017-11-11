// code produced by Martin Siddons.
#include <iostream>

using namespace std;

void exercise()
{
	int numIn = 0;
	while (numIn < 1)
	{
		cout << "Starting point (integer greater than zero) > ";
		cin >> numIn;
	}
	while (numIn != 1)
	{
		cout << numIn << " ";
		if (numIn % 2 == 0)
			numIn = numIn / 2;
		else
			numIn = numIn * 3 + 1;
	}
	cout << "1" << endl << endl;
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
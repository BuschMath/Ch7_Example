#include <iostream>

using namespace std;

int main()
{
	int number = 7;
	int numberCopy = number;
	int power = 5;

	for (int i = 2; i <= power; i++)
	{
		number = number * numberCopy;
		cout << number << endl;
	}

	cout << number << endl << endl;

	for (int i = 1; i <= 10; i=i+2)
	{
		cout << i << endl;
		for (int j = 1; j <= 5; j++)
		{
			cout << "\t" << j << endl;
		}
	}

	return 0;
}
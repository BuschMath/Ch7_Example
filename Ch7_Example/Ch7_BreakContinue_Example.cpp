#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
		for (int j = 1; j <= 10; j++)
		{
			if (j % 3 == 0)
				continue;
			if (j != i)
				break;

			cout << "\t" << j << endl;
		}
	}

/*	int i = 0;
	do
	{
		cout << i++ << endl;
		continue;
		cout << i << endl;
	} while (i<10);
*/
	return 0;
}
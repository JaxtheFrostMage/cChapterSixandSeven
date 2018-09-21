//For Loop Counting
//Author: Evan J. Raker
//Date: 9/21/2018
#include <iostream>
#include <string>
using namespace std;


int main()
{

	/*for (int i = 0; i <= 100; i = i + 3)
	{
		cout << i << endl;
		if (i == 48) {
			cout << "50" << endl;
			cout << "The cake is a lie." << endl;
		}
		if (i == 99)
			cout << "100" << endl;
		}
	for (int c = 0; c <= 100; c = c + 5)
	{
		cout << c << endl;
		if (c == 50) {
			cout << "REEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE" << endl;
		}
	}
		for (int x = 10; x >= 0; x--)
		{
			cout << x << endl;
			if (x == 0)
				cout << "Lift Off" << endl;
		}*/

	for (string o = "o"; o != "             o" ; o = " " + o)
	{
		cout << o << endl;
		}

	for (int v = 0; v <= 1000; v++)
	{
		if (v % 2 == 0 && v % 3 == 0 && v <= 12)
			cout << v << endl;
	}


	system("pause");
	return 0;
}
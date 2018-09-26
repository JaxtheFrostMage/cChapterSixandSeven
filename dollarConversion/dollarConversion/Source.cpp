//Dollar Conversion calculator
//Author: Evan J. Raker
//Date: 9/26/2018
#include <iostream>
#include <string>
using namespace std;

int main(){

	double dollars = 0;
	int currency = 0;
	double exchange = 0;
	int again = 0;

	do {
		cout << "How much american money do you have? ";
		cin >> dollars;

		cout << "What currancy are you converting to? \n 1 = Canadian Dollar \n 2 = Euro \n 3 = Indian Rupee \n 4 = Japanese yen \n 5 = Mexican Peso \n 6 = South Afrian Rand \n 7 = British Pounds " << endl;
		cin >> currency;

		switch (currency)
		{
		case 1:
			exchange = dollars * .9813;
			break;
		case 2:
			exchange = dollars * .757;
			break;
		case 3:
			exchange = dollars * 52.53;
			break;
		case 4:
			exchange = dollars * 80.92;
			break;
		case 5:
			exchange = dollars * 13.1544;
			break;
		case 6:
			exchange = dollars * 7.7522;
			break;
		case 7:
			exchange = dollars * .6178;
			break;
		default:
			cout << "Not valid" << endl;
		}

		cout << "your conversion rate will add up to be " << exchange << "." << endl;

		cout << "would you like another conversion? ";
		cin >> again;

	} while (again == 1);
		system("pause");
		return 0;
}
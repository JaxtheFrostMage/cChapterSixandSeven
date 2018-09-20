//Pick a Book
//Author: Evan J. Raker
//Date: 9/20/2018
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	
	int pickBook = 0;
	int secretBook;
	int count = 0;
	int again = 0;

	do {
	srand(time(NULL));
	secretBook = rand() % 57 + 1;

	cout << "Welcome to my chamber of dead tattoo trees";
	cout << "also known as books";
	cout << "there is a magic book, but only one. it is a pain to find since it leaves if it notices you trying to find it, you will only have two tries. \n I have 57 shelves so check one of them. \nMight kill you too" << endl;

	
		while (pickBook != secretBook && count != 2) {
			cout << "take a pick" << endl;
			cin >> pickBook;
			if (pickBook < secretBook) {
				cout << "the number was to low " << endl;
				count = count + 1;
			}
			else if (pickBook > secretBook) {
				cout << "the number was to high " << endl;
				count = count + 1;

			}
			else if (pickBook == secretBook) {
				cout << "Oh, you found him... keep him, he is more trouble then he's worth. " << endl;
			}
		}
		if (count == 2) {
			cout << "here he comes, isis has killed us. " << endl;
			pickBook = 0;
			count = 0;
			again++;
		}
		else {
			cout << "there it is. ";
		}
	} while (again != 2);
	system("pause");
	return 0;
}
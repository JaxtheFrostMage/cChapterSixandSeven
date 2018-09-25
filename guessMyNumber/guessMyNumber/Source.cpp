//Guess my Number Generator
//Author: Evan J. raker
//Date: 9/24/2018
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main()
{
	int userInput;
	int computerGuess = 0;
	int max = 100;
	int min = 0;
	int trys = 0;
	int again;
	do {
		cout << "choose a number between " << min + 1 << " and " << max << "\n and then the computer will guess it" << endl;
		cin >> userInput;

		while (userInput >= max + 1 || userInput <= min) {
			cout << "My parameters have not been met due to a faulty input, please enter a valid number " << endl;
			cin >> userInput;
		}

		while (computerGuess != userInput) {

			trys++;

			srand(time(NULL));
			computerGuess = rand() % (max - min) + (min + 1);

			if (computerGuess > userInput) {
				max = computerGuess;
			}
			else if (computerGuess < userInput) {
				min = computerGuess;
			}

			cout << "computer guess = " << computerGuess << "\n Attempts = " << trys << endl;
			sleep_for(seconds(1));

		}
		cout << "I the machine have beaten your challange in " << trys << " trys.";
		cout << "would you like to play again? \n 1 = again. \n 2 = leave." << endl;
			cin >> again;
			computerGuess = 0;
			 max = 100;
			 min = 0;
			 trys = 0;

	} while (again = 1);

	system("pause");
	return 0;
}

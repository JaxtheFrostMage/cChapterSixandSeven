//Rock, Paper, Scissors
//Author: Evan J. Raker
//Date: 9/26/2018
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int playerChoice;
	int computerChoice;


	cout << "pick Rock, Paper, or Scissors and beat the computer! \n 1 = Rock n\ 2 = Paper n\ 3 = Scissors " << endl;
	cin >> playerChoice;

	srand(time(NULL));
	computerChoice = rand() % 3 + 1;

	if (playerChoice = computerChoice) {
		cout << "draw...";
	}
	else if (playerChoice == 1 || computerChoice == 2) {
		cout << "Paper beats rock \n I win" << endl;
	}

}
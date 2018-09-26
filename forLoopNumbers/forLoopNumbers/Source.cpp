//ten Random Numbers
//Author: Evan J. raker
//Date: 9/25/2018
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

int main(){

for(int c=0; c<=10; c++) {

	srand(time(NULL));
	int number = rand() % 10 + 1;
	
	cout << number << endl;

	sleep_for(seconds(1));
}

system("pause");
return 0;
}
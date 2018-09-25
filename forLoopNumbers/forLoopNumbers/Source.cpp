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

	int number = 0;

for (int count = 0; count == 10; count++) {
	srand(time(NULL));
	number = rand() % 100 + 1;
	

	cout << count << endl;

	sleep_for(seconds(1));
}
system("pause");
return 0;
}
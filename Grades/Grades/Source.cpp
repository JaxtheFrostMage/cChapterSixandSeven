//Grade Switch
//Author: Evan J. Raker
//Date: 9/19/2018
#include <iostream>
#include <string>
using namespace std;


int main()
{

	char grade;
	string result;
	//enter grade to tell what type of student you are hehehehe

	cout << "Enter your letter grade: ";
	cin >> grade;
	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
		result = "Acceptable";
			break;
	case 'B':
		result = "Bad";
		break;
	case 'C':
		result = "Can't come home";
			break;
	case 'D':
		result = "Dig your own hole";
			break;
	case 'F':
		result = "Failure means death.";
			break;
	default:
		result = "not valid";
	} // end switch
	cout << result << endl;

	system("pause");
	return 0;
}
// pin practice problem
// June 9 2022

#include <iostream>

using namespace std;

// This program allows the user to input a pin 
// a maximum of three times before it "locks"

int main() {

	int pin = 7259;
	int errorCounter = 0;
	int userAttempt;

	// the do while loop allows user to continue guessing
	// as well as increment the attempt counter

	do {
		cout << "PIN: ";
		cin >> userAttempt;

		if (pin != userAttempt)
			errorCounter++;

	} while (errorCounter < 3 && pin != userAttempt);

	// the following if else statement is what the program falls to 
	// when either the user guesses the pin correctly or 
	// uses all three attempts

	if (errorCounter < 3)
		cout << "Loading...";
	else
		cout << "Blocked...";


}
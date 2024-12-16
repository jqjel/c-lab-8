#include <iostream>
using namespace std;
// cyclesforPIN, X_mid == number
int main() {

	cout << "Enter a 4-digit PIN to test: ";

	int number;
	cin >> number;

	int X_lower = -1;
	int X_upper = 10000;
	int cyclesforPIN = 0;
	bool searching_for_PIN = 1;

	while (searching_for_PIN) { 
		
		++cyclesforPIN;
		int X_mid = (X_upper + X_lower) / 2;

		if (X_mid == number) {

			searching_for_PIN = 0;

		} else if (X_mid > number) {
			X_upper = X_mid;
		} else { 

			X_lower = X_mid;

		} // end check on X_mid

	} // end of while loop

	cout << "It took " << cyclesforPIN << " cycles to guess this PIN." << endl;

} // end of main function



#include <iostream>
using namespace std;

int num, i, guessNum, randNum;



int main() {
	cout << "finds the prime numbers up to the entered number \n\nplease just enter a number\n";
	cin >> num;

	for (; num > 0; num--) {
		bool primeNum = 1;
		if (num == 0 || num == 1) {
			primeNum = false;
		}


		for (i = 2; i <= num / 2; ++i) {
			if (num % i == 0) {
				primeNum = false;
				break;
			}
		}

		if (primeNum) {
			cout << num << " is a Prime Number" << endl;
		}
		/*else {
			cout << num << " is not a Prime Number" << endl;
		}*/
	}

	cout << "\n\n\n\n\n\n";

	srand(time(0));
	randNum = rand() % 100 + 1;
	cout << "welcome to the estimation center\n\nplease enter number between 0 and 100 " << endl;
	bool cycle = true;
	int estimate = 0;
	while (cycle) {

		cin >> guessNum;

		if (guessNum <= 100 || guessNum >= 0) {

			if (randNum < guessNum) {
				cout << "enter a smaller number" << endl;
				estimate += 1;
			}

			else if (guessNum < randNum) {
				cout << "enter a bigger number" << endl;
				estimate += 1;
			}

			else {
				cout << "equel to each other " << endl;
				cycle = false;
				estimate += 1;
			}
		}

		else {
			cout << "it is not between 0 and 100 \nplease try again" << endl;
		}
	}
	cout << "number of estimates is " << estimate << endl;


}
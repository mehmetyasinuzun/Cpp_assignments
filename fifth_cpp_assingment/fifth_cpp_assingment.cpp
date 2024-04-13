#include <iostream>
#include <string>
using namespace std;

int main() {

	int option;

	while (true) {

		cout << "1. IS THE NUMBER ODD OR EVEN? / press '1' \n2. ECONOMY FLIGHT BAGGAGE COST CALCULATION CENTRE / press '2'" << endl << endl;
		cin >> option;


		//for homework_1 codes

		if (option == 1) {

			string karakter;
			char type;
			int sayi;

			cout << "Enter a number: ";
			cin >> karakter;


			if (isdigit(karakter[0])) {

				sayi = stoi(karakter);
				cout << sayi << " is a number" << endl;
				cout << sayi;

				cout << "\n\t\t-\n\t\t--\n\t\t---\n\t\t----\n\t\t-----\n\t\t------CALCULATING------" << endl << endl;


				if (sayi % 2 == 0) {

					cout << sayi << " this number is even" << endl << endl << endl;
				}
				else {
					cout << sayi << " this number is odd" << endl << endl << endl;
				}

			}
			else {
				cout << karakter << " is not number" << endl;
				cout << "please try again!" << endl << endl << endl;
			}

		}



		// For homework_2 codes


		else if (option == 2) {

			double l, w, d, total, kg, money(50);

			cout << "Welcome to Economy Flight Baggage Cost Calculation Centre" << endl << endl;
			cout << "please enter the size of your baggage" << endl;
			cout << "Enter length, width and depth in order (cm) \n\n";
			cin >> l >> w >> d;
			total = l * w * d;
			cout << "your baggage volume is :" << total << endl << endl << endl;
			cout << "Enter your baggage weigh (kg)\n" << endl;
			cin >> kg;
			cout << "your baggage weighs " << kg << " kg" << endl;


			if (total <= 108 && kg <= 50) {
				cout << "\n\t\t-\n\t\t--\n\t\t---\n\t\t----\n\t\t-----\n\t\t------CALCULATING------" << endl << endl;
				cout << "Cost: " << money << " Dollars" << endl << endl << endl;
			}

			else {
				if (total > 108) {
					if (total < 120) {
						money += 5;
					}
					else if (total < 130) {
						money += 10;
					}
					else {
						money += 30;
					}
				}


				if (kg > 50) {
					if (kg < 60) {
						money += 10;
					}
					else if (kg < 70) {
						money += 15;
					}
					else {
						money += 20;
					}
				}
				cout << "\n\t\t-\n\t\t--\n\t\t---\n\t\t----\n\t\t-----\n\t\t------CALCULATING------" << endl << endl;
				cout << "Cost: " << money << " Dollars" << endl << endl << endl;
			}

		}



		else {
			cout << "please try again\n\n";
		}

	}

}


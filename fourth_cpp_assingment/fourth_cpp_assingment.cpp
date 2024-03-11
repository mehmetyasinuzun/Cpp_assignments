/*
Mehmet Yasin UZUN
Sivas University of Science and Technology
Computer Engineering
*/


#include <iostream>
using namespace std;

double a, b, c, option, edge;

int main() {

    while (true) {

        cout << "1. RIGHT TRIANGLE CALCULATION / press '1' \n2. CUBE CALCULATION CENTER / press '2' \n3. FOR TASK-3 / press '3'" << endl;
        cin >> option;

        
        //task-4 için yazýlan kodlar
        
        if (option == 1) {

            cout << "WELCOME TO RIGHT TRIANGLE CALCULATION CENTER" << endl;
            cout << "I will find the hypotenuse" << endl;
            cout << "you can enter first edge" << endl;
            cin >> a;
            cout << "\nfirst edge is " << a << endl << endl;
            cout << "you can enter second edge" << endl;
            cin >> b;
            cout << "\n second edge is " << b << endl << endl;
            cout << "-----CALCULATING-----" << endl;
            c = sqrt(a * a + b * b);
            cout << "CONSEQUENCE is " << c << endl << endl << endl;
        }


        //task-5 için yazýlan kodlar


        else if (option == 2) {
            double p, s, v;
            cout << "WELCOME TO RIGHT CUBE CALCULATION CENTER" << endl;
            cout << " I will find \nPERIMETER,\nSURFACE AREA and\nVOLUME\nof cube" << endl;
            cout << "enter the edge" << endl;
            cin >> edge;
            cout << "\nedge is " << edge << endl << endl;
            cout << "\n\t\t-\n\t\t--\n\t\t---\n\t\t----\n\t\t-----\n\t\t------CALCULATING------" << endl << endl;
            p = 4 * edge;
            s = edge * edge;
            v = edge * edge * edge;
            cout << "Perimeter: " << p << endl << "Surface Area: " << s << endl << "Volume of cube: " << v << endl << endl;

        }

        //task-3 için yazýlan kodlar

        else if (option == 3) {
            double i,j;
            for (i = 0; i <= 5; ++i) {
                cout << endl;
                for (j = 0; j <= i; j++)
                    cout << "*";

            }

            cout << endl << endl;


        }


        else {
            cout << "please try again";
        }
    }

}
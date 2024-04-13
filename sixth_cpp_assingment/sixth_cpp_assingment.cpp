
#include <iostream>

using namespace std;

int main()
{

    int month;
    cout << "Enter a month number between (0-12): ";
    cin >> month;

    switch (month) {

    case 12:
    case 1:
    case 2:
        cout << "Winter :)" << endl;
        break;

    case 3:
    case 4:
    case 5:
        cout << "Spring months" << endl;
        break;

    case 6:
    case 7:
    case 8:
        cout << "Summer months" << endl;
        break;

    case 9:
    case 10:
    case 11:
        cout << "Autumn months" << endl;
        break;


    default:

        cout << "there is no month like this" << endl;
        cout << "therefore it doesn't blong to any season" << endl;

    }

}
#include <iostream>
using namespace std;

// this function asks the user two values
// and stores the larger value
// in a seperate variable, and prints to terminal

int main() {
    int firstVal;
    int secondVal;

    cout << "Enter an integer value --> ";
    cin >> firstVal;

    cout << "Enter another integer value --> ";
    cin >> secondVal;

// giving largerVal the larger value between first and second val
    int largerVal = (firstVal != secondVal) ? (firstVal > secondVal ? firstVal : secondVal) : -1;


    if (largerVal == -1) {
        cout << "Enter two different integers." << endl;
    }
    else {
        cout << "\nThe larger value between your integers is " << largerVal;
    }

    return 0;
}

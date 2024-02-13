#include <iostream>
#include <string>

using namespace std;

int intFromUser();
int compareTwoInts(int a, int b);
int sumTwoInts(int a, int b);


int main() {
    int integer = intFromUser();
    cout << "Your integer is: " << integer << endl << endl;
    int largest = compareTwoInts(intFromUser(), intFromUser());
    cout << "The largest integer is: " << largest << endl << endl;
    int sum = sumTwoInts(intFromUser(), intFromUser());

    cout << "The sum of the two integers is: " << sum << endl << endl;

    return 0;
}

int intFromUser() {
    int input;
    cout << "Enter integer: ";
    cin >> input;

    cout << endl;
    return input;
}

int compareTwoInts(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int sumTwoInts(int a, int b) {
    return a + b;
}
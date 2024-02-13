#include <iostream>
using namespace std;

int largestOfThree(int a, int b, int c);
int largestOfThreeExpanded(int a, int b, int c);

int main() {

    cout << "Please enter three integers to compare: " << endl;
    int a, b, c;

    cin >> a >> b >> c;

    cout << "The largest integer is: " << largestOfThree(a, b, c) << endl;

    cout << "Using the expanded version of the function: " << largestOfThreeExpanded(a, b, c) << endl;

    return 0;
}

// Function to compare three integers and return the largest
int largestOfThree(int a, int b, int c) {
    // Check if a and b are equal
    if(a == b) {
        // Check if b and c are equal, meaning they all are
        if (b == c) {
            return a;
        // Else check if b is greater than c
        } else if (b > c) {
            return b;
        } else {
            return c;
        }
    // If an and b are not equal, check if a is bigger
    } else if (a > b) {
        // Check if a is also greater than c
        if (a > c) {
            return a;
        } else {
            return c;
        }
    // If a is not greater than b, check if b is greater than c
    } else if (b > c) {
        return b;
    } else {
        return c;
    } 
}

// Expanded (condensed?) version of the function. Much easier to read and understand then all the different sub-conditions
// in the function above.
int largestOfThreeExpanded(int a, int b, int c) {
    // Check if all three are equal
    if(a == b && b == c) {
        return a;
    // Check if a is greater than b and c
    } else if (a > b && a > c) {
        return a;
    // Check if b is greater than c
    } else if (b > c) {
        return b;
    } else {
        return c;
    }

}

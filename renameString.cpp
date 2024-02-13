#include <iostream>
#include <string>

using namespace std;

string reverseString(string input);
string reverseStringRemoveSpaces(string input);

int main()
{
    cout << "Please enter a string to be reversed: " << endl;

    string input;
    string input2;
    getline(cin, input);
    cout << "Reversed string: " << reverseString(input) << endl;
    cout << "Please enter a string to be reversed and have spaces removed: " << endl;
    getline(cin, input2);
    cout << "Reversed string: " << reverseStringRemoveSpaces(input2) << endl;
    return 0;
}

// Takes a string and reverses the characters and returns the output
string reverseString(string input) {
    // Variable to store the output
    string output = "";

    // Loop through the input string and add the characters to the output string in reverse order
    for (int i = 0; i <= input.length(); i++) {
        output += input[input.length() - i];
    }

    // Return the output
    return output;
}

// Takes a string and reverses the characters and returns the output
string reverseStringRemoveSpaces(string input) {
    // Variable to store the output
    string output;

    // Loop through the input string and add the characters to the output string in reverse order
    // Check if the character is a space and if it is, skip it
    for (int i = 0; i <= input.length(); i++) {
        if (input[input.length() - i] != ' ') {
            output += input[input.length() - i];
        }
    }

    // Return the output
    return output;
}


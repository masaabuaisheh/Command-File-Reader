#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open the input file
    ifstream inFile("command.txt");

    // Check if the file is opened successfully
    if (!inFile.is_open()) {
        cout << "An error occurred. File not found." << endl;
        return 1;
    }

    // Read the number of commands from the file
    int num;
    inFile >> num;

    // Variables to store command and argument
    string command, arg;

    // Loop over each command
    for (int i = 0; i < num; ++i) {
        // Read command from file
        inFile >> command;

        // Read argument if command requires one
        if (command == "insert" || command == "delete" || command == "search" || command == "startwith") {
            inFile >> arg;
        }

        // Print command and argument
        cout << "Command: " << command << ", Argument: " << arg << endl;
    }

    // Close the file and exit
    inFile.close();
    return 0;
}


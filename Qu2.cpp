#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers; // Vector to store integers entered by the user
    int num;

    // Input numbers until -1 is entered
    cout << "Enter integers (enter -1 to stop): ";
    while (cin >> num && num != -1) {
        numbers.push_back(num); // Add the number to the vector
    }

    // Check if there are enough numbers to find the second largest
    if (numbers.size() < 2) { // If less than two numbers, display an error
        cout << "Not enough numbers to find the second largest!" << endl;
        return 0; // Exit the program
    }

    // Sort the vector in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());

    // Output the sorted vector
    cout << "Sorted vector (descending): ";
    for (int n : numbers) { // Loop through the sorted vector
        cout << n << " ";  // Print each number
    }
    cout << endl;

    // Output the largest and second largest numbers
    cout << "Largest number: " << numbers[0] << endl; // First element is the largest
    cout << "Second largest number: " << numbers[1] << endl; // Second element is the second largest

    return 0; // End the program
}
}

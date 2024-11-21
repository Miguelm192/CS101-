#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    int num;

    // Input numbers until -1 is entered
    cout << "Enter integers (enter -1 to stop): ";
    while (cin >> num && num != -1) {
        numbers.push_back(num); // Add the number to the vector
    }

    // Check if there are enough numbers
    if (numbers.size() < 2) {
        cout << "Not enough numbers to find the second largest!" << endl;
        return 0;
    }

    // Sort the vector in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());

    // Output the sorted vector
    cout << "Sorted vector (descending): ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // Output the largest and second largest numbers
    cout << "Largest number: " << numbers[0] << endl;
    cout << "Second largest number: " << numbers[1] << endl;

    return 0;
}

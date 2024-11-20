#include <iostream>
#include <array>
using namespace std;

int main() {
    // Declare the 4x5 matrix, 5-element vector, and 4-element result vector
    array<array<double, 5>, 4> mymatrix = {};
    array<double, 5> myvector = {};
    array<double, 4> resultvector = {};

    // Input the 4x5 matrix
    cout << "Enter a 4x5 matrix of doubles:" << endl;
    for (size_t row = 0; row < mymatrix.size(); row++) {
        for (size_t col = 0; col < mymatrix[row].size(); col++) {
            cin >> mymatrix[row][col];
        }
    }

    // Input the 5-element vector
    cout << "Enter a 5-element vector of doubles:" << endl;
    for (size_t i = 0; i < myvector.size(); i++) {
        cin >> myvector[i];
    }

    // Perform matrix-vector multiplication
    for (size_t row = 0; row < mymatrix.size(); row++) {
        for (size_t col = 0; col < mymatrix[row].size(); col++) {
            resultvector[row] += mymatrix[row][col] * myvector[col];
        }
    }

    // Output the result vector
    cout << "Result vector:" << endl;
    for (size_t i = 0; i < resultvector.size(); i++) {
        cout << resultvector[i] << endl;
    }

    return 0;
}

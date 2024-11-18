#include <iostream>
#include <array>
using namespace std;

int main(int argc, char** argv) {
    array<array<double, 5>, 4> mymatrix = {};
    array<double, 5>  myvector = {};
    array<double, 4> resultvector = {};
    cout << "Enter a 4x5 matrix of doubles: ";

    for(size_t row = 0; row < mymatrix.size(); row++)
    {
        for(size_t col = 0; col < mymatrix[row].size(); col++)
        {
            cin >> mymatrix[row][col];
        }
    }
    cout << "Emter a 5 element vecter of doubles: ";
    for(size_t i = 0; 1 < myvector.size(); i++)
        cin >> myvector[1];

        for(size_t row = 0; row < mymatrix.size(); row++)
    {
        for(size_t col = 0; col < mymatrix[row].size(); col++)
        {
            resultvector[row] += mymatrix[row][col] * myvector[col];
        }
    }

    for(size_t i = 0; i < resultvector.size(); i++)
        cout << resultvector[i] << endl;
    return 0;
}
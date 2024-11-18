#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    vector<int> myvector;

    int value;
    cout << "Enter a positive integer [-1 to stop]: ";
    cin >> value;

    while(value != -1)
    {
        myvector.push_back(value);
        cout << "Enter a positive integer [-1 to stop]: ";
        cin >> value;
    }
    sort(myvector.begin(), myvector.end());
    for(int element: myvector)
        cout << element << " ";
        cout << endl;

        int sCounter = 0; //search counter that keeps track oh how many times search elements appear in the vector
        int sElement; //Search Element
        cout << "Enter element to search: ";
        cin >> sElement;

        int counter = 0; // Loop counter that will traverse the entire vector
        while(counter < myvector.size())
        {
            if(myvector[counter] == sElement) // if the element is equal to the search element
            {
                sCounter+= 1;
                int nextCounter = counter+ 1;
                while(nextCounter < myvector.size() &&myvector[nextCounter] == sElement)
                {
                    sCounter++;
                    nextCounter++;
                }
                break;
            }

            counter++;
        }
    cout << "We found " << sElement << " " << sCounter << " times in the vector" << endl;

        return 0;
}
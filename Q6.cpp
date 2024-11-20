#include <iostream>
#include <vector>
using namespace std;

bool friends(const vector<string> &names, const string &name1, const string &name2) {
    for (size_t i = 0; i < names.size(); i++) {
        if (names[i] == name1) {
            // Calculate left and right neighbor indices, wrapping around the vector
            int left_i = (i - 1 + names.size()) % names.size();
            int right_i = (i + 1) % names.size();

            // Check if either neighbor matches name2
            if (names[left_i] == name2 || names[right_i] == name2) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<string> table = {"A", "B", "C", "D", "E"};
    cout << boolalpha;
    cout << friends(table, "B", "D") << endl; // false
    cout << friends(table, "A", "B") << endl; // true
    cout << friends(table, "D", "E") << endl; // true
    cout << friends(table, "C", "B") << endl; // true

    return 0;
}

#include <iostream>
#include <string> // Include string header for string operations

using namespace std;

int main(int argc, char** argv) {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string digits = "0123456789"; // Corrected variable name

    size_t pos = sentence.find_first_of(digits);
    while (pos != string::npos) {
        sentence.erase(pos, 1);
        pos = sentence.find_first_of(digits, pos);
    }

    // Output the modified string
    cout << "String without digits: " << sentence << endl;

    return 0;
}

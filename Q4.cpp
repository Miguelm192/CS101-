#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string digit = "0123456789";

    size_t pos = sentence.find_first_of(digits);
    while(pos != string:: npos)
    {
        sentence.erase(pos, 1);
        pos = sentence.find_first_of(digits, pos);
    }

    return 0;
}
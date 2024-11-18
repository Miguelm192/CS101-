#include <iostream>
using namespace std;
int main (int argc, char** argv) {
    string sentence;

    cout << "Enter a string: ";
    getline(cin, sentence);

    for(int counter = sentence.size() - 1; counter >=0;counter--) {
        if(sentence[counter]>=65 and sentence[counter] <= 90)
            {
                sentence[counter] += 32;
            }
            else if(sentence[counter] >= 97 and sentence[counter] <= 127)
            {
                sentence[counter] -= 32;
            }

            cout << sentence[counter];
    }
    return 0;
}
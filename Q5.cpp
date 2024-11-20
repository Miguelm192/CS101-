#include <iostream>
#include <string>
using namespace std;

// Function to encrypt the text using Caesar cipher
void encrypt(string &text, int key) {
    for (size_t i = 0; i < text.size(); i++) {
        text[i] = (text[i] + key) % 128; // Add the key and apply modulus 128
    }
}

// Function to decrypt the text using Caesar cipher
void decrypt(string &text, int key) {
    for (size_t i = 0; i < text.size(); i++) {
        text[i] = (text[i] - key) % 128; // Subtract the key and apply modulus 128
        if (text[i] < 0) {
            text[i] += 128; // Ensure the value stays within the valid range
        }
    }
}

int main() {
    string message = "Hello there my name is Miguel"; // Original message
    int key = 7; // Key for encryption and decryption

    // Encrypt the message
    encrypt(message, key);
    cout << "ENCRYPTED: " << message << endl;

    // Decrypt the message
    decrypt(message, key);
    cout << "DECRYPTED: " << message << endl;

    return 0;
}

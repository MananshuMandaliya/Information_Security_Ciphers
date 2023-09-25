#pragma once
#pragma warning(disable:4996)
#include<iostream>
#include<ctype.h>
#include<string.h>

using namespace std;

void fn_bci_encryption_IS2023F1031_21BBS0121() {
    string message;
    int key;

    cout << "Enter the message: ";
    cin >> message;
    cout << "Enter the key: ";
    cin >> key;
    int length = message.length();
    int numCols = (length + key - 1) / key;
    string encrypted = "";

    // Pad the message with 'x' to fill the last row
    if (length % key != 0) {
        int numPadding = key - (length % key);
        message.append(numPadding, 'x');
        length += numPadding;
    }

    // Reverse the message before encryption
    reverse(message.begin(), message.end());

    // Encrypt the message
    for (int i = 0; i < key; i++) {
        for (int j = 0; j < numCols; j++) {
            encrypted += message[j * key + i];
        }
    }

    cout << "The encrypted string is \n" << encrypted << endl;

}

void fn_bci_decryption_IS2023F1031_21BBS0121() {
    string message;
    int key;
    cout << "Enter the encrypted text: ";
    cin >> message;
    cout << "Enter the key: ";
    cin >> key;
    int length = message.length();
    int numCols = length / key;
    string decrypted = "";

    // Decrypt the message
    for (int i = 0; i < numCols; i++) {
        for (int j = 0; j < key; j++) {
            decrypted += message[j * numCols + i];
        }
    }

    // Reverse the decrypted string
    reverse(decrypted.begin(), decrypted.end());

    // Remove any trailing 'x' padding
    while (!decrypted.empty() && decrypted.back() == 'x') {
        decrypted.pop_back();
    }

    cout << "The decrypted string is \n" << decrypted << endl;

}
#pragma once
#pragma warning(disable:4996)
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<iostream>

using namespace std;

inline void fn_pssc_encryption_IS2023F1031_21BBS0121() {
	char text[100];
	char key[10];
	int ws = 0;

	printf("Enter message:\n");
	fgets(text, 100, stdin);
	printf("Enter key:\n");
	scanf("%s", &key);

	int messageLength = strlen(text);
	int keyLength = strlen(key);

	for (int i = 0; i < messageLength - 1; i++) {
		if (isalpha(text[i])) {
			if (isupper(text[i])) {
				text[i] = ((text[i] - 'A' + (key[(i - ws) % keyLength] - 'A')) % 26 + 'A');
			}
			else {
				text[i] = ((text[i] - 'a' + (key[(i - ws) % keyLength] - 'A')) % 26 + 'a');
			}
		}
		else {
			ws += 1;
		}
	}
	printf("Encrypted msg: %s\n", text);
}

inline void fn_pssc_decryption_IS2023F1031_21BBS0121() {
	char text[100];
	char key[10];
	int ws = 0;

	printf("Enter message:\n");
	fgets(text, 100, stdin);
	printf("Enter key:\n");
	scanf("%s", &key);

	int messageLength = strlen(text);
	int keyLength = strlen(key);

	for (int i = 0; i < messageLength - 1; i++) {
		if (isalpha(text[i])) {
			if (isupper(text[i])) {
				text[i] = ((text[i] - 'A' - (key[(i - ws) % keyLength] - 'A') + 26) % 26 + 'A');
			}
			else {
				text[i] = ((text[i] - 'a' - (key[(i - ws) % keyLength] - 'A') + 26) % 26 + 'a');
			}
		}
		else {
			ws += 1;
		}
	}
	printf("Decrypted msg: %s\n", text);
}
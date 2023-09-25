#pragma once
#pragma warning(disable:4996)
#include<stdio.h>
#include<ctype.h>
#include<iostream>

using namespace std;

inline void fn_cc_encryption_21BBS0121(void) {
	char text[500], ch;
	int key;

	printf("Enter message: ");
	scanf("%s", &text);
	printf("Enter key: ");
	scanf("%d", &key);

	for (int i = 0; text[i] != '\0'; i++) {
		ch = text[i];

		if (isalnum(ch)) {
			if (islower(ch)) {
				ch = (ch - 'a' + key) % 26 + 'a';
			}
			if (isupper(ch)) {
				ch = (ch - 'A' + key) % 26 + 'A';
			}
			if (isdigit(ch)) {
				ch = (ch - '0' + key) % 10 + '0';
			}
			text[i] = ch;
		}
		else {
			printf("Invalid message\n");
			break;
		}
	}
	printf("Encrypted msg: %s\n", text);
}

inline void fn_cc_decryption_21BBS0121(void) {
	char text[500], ch;
	int key;

	printf("Enter message: ");
	scanf("%s", &text);
	printf("Enter key: ");
	scanf("%d", &key);

	for (int i = 0; text[i] != '\0'; i++) {
		ch = text[i];

		if (isalnum(ch)) {
			if (islower(ch)) {
				ch = (ch - 'a' - key + 26) % 26 + 'a';
			}
			if (isupper(ch)) {
				ch = (ch - 'A' - key + 26) % 26 + 'A';
			}
			if (isdigit(ch)) {
				ch = (ch - '0' - key + 10) % 10 + '0';
			}
			text[i] = ch;
		}
		else {
			printf("Invalid message\n");
			break;
		}
	}
	printf("Decrypted msg: %s\n", text);
}
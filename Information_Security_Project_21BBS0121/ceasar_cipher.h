#pragma once
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

void fn_encryption1() {
	int i, key = 3;
	char str[100];

	printf("Enter a string\n");
	scanf("%s", &str);

	for (i = 0; i < 100 && str[i] != '\0'; i++) {
		str[i] += key;
	}
	
	printf("Encrypted msg: %s\n", str);
}

void fn_decryption1() {
	int i, key = 3;
	char str[100];

	printf("Enter a string\n");
	scanf("%s", &str);

	for (i = 0; i < 100 && str[i] != '\0'; i++) {
		str[i] -= key;
	}

	printf("Decrypted msg: %s\n", str);
}

void fn_encryption2() {
	int i, key = 3;
	char str[100];

	printf("Enter a string\n");
	scanf("%s", &str);

	printf("Enter key\n");
	scanf("%d", &key);

	for (i = 0; i < 100 && str[i] != '\0'; i++) {
		str[i] += key;
	}

	printf("Encrypted msg: %s\n", str);
}

void fn_decryption2() {
	int i, key;
	char str[100];

	printf("Enter a string\n");
	scanf("%s", &str);

	printf("Enter key\n");
	scanf("%d", &key);

	for (i = 0; i < 100 && str[i] != '\0'; i++) {
		str[i] -= key;
	}

	printf("Decrypted msg: %s\n", str);
}
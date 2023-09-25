#pragma once
#pragma warning(disable:4996)
#include<stdio.h>
#include<iostream>

using namespace std;

void fn_helloworld_21BBS0121() {
	printf("Hello World\n");
}

void fn_print_your_name() {
	char name[100];
	printf("What is your name? ");
	scanf("%s",&name);
	printf("Hello, %s!\n", name);
}
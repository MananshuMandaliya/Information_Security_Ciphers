#pragma once
#include<stdio.h>
#include<colors.h>

int add(int a, int b) {
	fn_red();
	return a + b;
	fn_reset();
}

int sub(int a, int b) {
	fn_blue();
	return a - b;
	fn_reset();
}

float divide(float a, float b) {
	fn_green();
	return a / b;
	fn_reset();
}

int multiply(int a, int b) {
	fn_magenta();
	return a * b;
	fn_reset();
}
#pragma once
#include<stdio.h>
#include<LA1_21BBS0121.h>

void fn_mnudrvprg_LA1_21BBS0121() {
	while (1) {
		int choice;
		printf("List of choices\n0-Exit\t\t1-Hello world\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			fn_helloworld_21BBS0121();
			break;
		case 0:
			return;
		}
		printf("***********************************************************\n");
	}
}
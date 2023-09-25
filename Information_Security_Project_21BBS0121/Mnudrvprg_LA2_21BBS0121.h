#pragma once
#include<stdio.h>
#include<LA2_cc_21BBS0121.h>
#pragma warning(disable:4996)

void fn_mnudrvprg_LA2_21BBS0121() {
	int choice;
	while (1) {
		printf("List of choices\n");
		printf("0.Exit\t1.Encryption Program(CC)\t2.Decryption Program(CC)3\n");
		printf("Enter Choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 0:
			return;
		case 1:
			fn_cc_encryption_21BBS0121();
			break;
		case 2:
			fn_cc_decryption_21BBS0121();
			break;
		}
		printf("***********************************************************\n");
	}
}
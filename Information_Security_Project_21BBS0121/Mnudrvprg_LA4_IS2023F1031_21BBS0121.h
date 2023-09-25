#pragma once
#pragma warning(disable:4996)
#include<stdio.h>
#include<LA4_cbi_21BBS0121.h>

void fn_mnudrvprg_LA4_IS2023F1031_21BBS0121() {
	int choice;
	char c;
	while (1) {
		printf("List of choices\n");
		printf("1.Encryption-Block\n2.Decryption-Block\n0.Exit\n");
		printf("Enter Choice: ");
		scanf("%d%c", &choice, &c);

		switch (choice) {
		case 0:
			return;
		case 1:
			fn_bci_encryption_IS2023F1031_21BBS0121();
			break;
		case 2:
			fn_bci_decryption_IS2023F1031_21BBS0121();
			break;
		}
		printf("***********************************************************\n");
	}
}
#pragma once
#include<stdio.h>
#include<ceasar_cipher.h>
#pragma warning(disable:4996)

int fn_mnudrvprg_ceasar_cipher_1() {
	while(1){
		int choice;
		printf("####################################\n");
		printf("List of choices\n");
		printf("1.Encryption-1\n2.Decryption-1\n3.Encryption-2\n4.Decryprion-2\n0.Exit\n");
		printf("Enter Choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 0:
			return 0;
		case 1:
			fn_encryption1();
			break;
		case 2:
			fn_decryption1();
			break;
		case 3:
			fn_encryption2();
			break;
		case 4:
			fn_decryption2();
			break;
		}
	}

}
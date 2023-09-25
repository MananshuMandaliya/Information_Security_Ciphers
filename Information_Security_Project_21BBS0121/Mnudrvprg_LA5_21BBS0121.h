#pragma once
#pragma warning(disable:4996)
#include<stdio.h>
#include<colors.h>
#include<mnudrvprg_ceasar_cipher1.h>
#include<Mnudrvprg_LA1_21BBS0121.h>
#include<Mnudrvprg_LA2_21BBS0121.h>
#include<Mnudrvprg_LA3_IS2023F1031_21BBS0121.h>
#include<Mnudrvprg_LA4_IS2023F1031_21BBS0121.h>


void fn_mnudrvprg_LA5_21BBS0121() {
	int choice;
	char c;
	while (1) {
		fn_green();
		printf("List of choices\n");
		printf("0-Exit\t1-Hello Wolrd\t2-Caesar Cyper(1)\t3-Caesar Cypher(2)\t4-Caesae Cypher(3)\t5-Stream Cypher\t6-Block Cypher\n");
		fn_yellow();
		printf("--------------------------------------------------------------------------------------------------------\n");
		fn_reset();
		printf("Enter Choice: ");
		scanf("%d%c", &choice, &c);

		switch (choice) {
		case 0:
			return;
		case 1:
			fn_mnudrvprg_LA1_21BBS0121();
			break;
		case 2:
			fn_mnudrvprg_ceasar_cipher_1();
			break;
		case 3:
			fn_mnudrvprg_ceasar_cipher_1();
			break;
		case 4:
			fn_mnudrvprg_LA2_21BBS0121();
			break;
		case 5:
			fn_mnudrvprg_LA3_IS2023F1031_21BBS0121();
			break;
		case 6:
			fn_mnudrvprg_LA4_IS2023F1031_21BBS0121();
			break;
		}
	}
}
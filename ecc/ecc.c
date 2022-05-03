/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        ecc.h
 * @brief       Tutorial on ECC - ECC Functions
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "ecc.h"


#define PRINT_KEY_LINE_LENGTH 5

// Print key
void print_bytes(uint8_t* key, size_t size) {
	for(size_t i = 0; i < size; i++){
		if(i != 0 && i%PRINT_KEY_LINE_LENGTH == 0)
			printf("\n");
		printf("0x%x\t", key[i]);
	}
	printf("\n");
}

int compute_ecc_keys(void) {
	return 0;
}

int sign_and_verify_msg(char *msg) {
	(void) msg;

	return 0;
}

int compute_shared_key(void) {

	return 0;
}

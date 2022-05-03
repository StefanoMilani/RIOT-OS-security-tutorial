/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        encrypt.h
 * @brief       Tutorial on AES - AES Functions
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "encrypt.h"

#define PRINT_KEY_LINE_LENGTH 5


// Print key
void print_bytes(const uint8_t* key, size_t size) {
	for(size_t i = 0; i < size; i++){
		if(i != 0 && i%PRINT_KEY_LINE_LENGTH == 0)
			printf("\n");
		printf("0x%x\t", key[i]);
	}
	printf("\n");
}

// Init aes context
int make_aes_128_key(void) {
	return 0;
}

// Decrypt message using aes 128 (Parameters to be set)
int aes_128_decrypt(void) {

	return 0;
}

// Encrypt msg using aes-128
int aes_128_encrypt(char* msg) {
	(void) msg;

	return 0;
}

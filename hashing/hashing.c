/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        hashing.c
 * @brief       Tutorial on Hashing functions - Hashing Functions
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "hashing.h"

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

// Compute the SHA-256 of msg and print the result
int hash_sha_256(const char *msg) {
	(void) msg;

	return 0;
}

// Compute the SHA3-256 of msg and print the result
int hash_sha3_256(const char *msg) {
	(void) msg;

	return 0;
}

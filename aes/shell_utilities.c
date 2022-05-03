/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        shell_utilities.c
 * @brief       Tutorial on AES - Shell Utilities
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "shell_utilities.h"
#include "encrypt.h"

int get_args(int argc, char **argv, char **res) {
	switch(argc) {
		case 1:
			*res = "SuperRandomString";
			break;
		case 2:
			*res = argv[1];
			break;
		default:
			return 1;
	}
	return 0;
}

int aes_encrypt_shell_wrapper(int argc, char **argv) {
	char *msg = "";
	uint8_t res;

	// Get message from args if available
	res = get_args(argc, argv, &msg);
	if (res > 0) {
		(void) puts("usage: aes-enc [msg]");
		return 1;
	}

	aes_128_encrypt(msg);

	return 0;
}

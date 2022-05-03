/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        shell_utilities.c
 * @brief       Tutorial on ECC - Shell Utilities
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "shell_utilities.h"
#include "ecc.h"

int get_args(int argc, char **argv, char **res) {
	switch(argc) {
		case 1:
			*res = "SuperRandomStr";
			break;
		case 2:
			*res = argv[1];
			break;
		default:
			return 1;
	}
	return 0;
}

int compute_ecc_keys_shell_wrapper(int argc, char ** argv) {
	(void) argv;
	if (argc > 1) {
		(void) puts("usage: compute-ecc-keys");
		return 1;
	}

	compute_ecc_keys();
	return 0;
}

int sign_and_verify_shell_wrapper(int argc, char **argv) {
	char *msg = "";
	uint8_t res;

	// Get message from args if available
	res = get_args(argc, argv, &msg);
	if (res > 0) {
		(void) puts("usage: sign-msg [msg]");
		return 1;
	}

	sign_and_verify_msg(msg);
	return 0;

}

int shared_key_shell_wrapper(int argc, char **argv) {
	(void) argv;
	if (argc > 1) {
		(void) puts("usage: compute-ecc-keys");
		return 1;
	}

	compute_shared_key();
	return 0;

}

/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        main.c
 * @brief       Tutorial on ECC - Main
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#include <stdio.h>
#include <string.h>

#include "thread.h"
#include "shell.h"

#include "shell_utilities.h"

static const shell_command_t commands[] = {
	{"compute-ecc-keys", "Compute ECC priv/pub key pair", compute_ecc_keys_shell_wrapper},
	{"sign-msg", "Sign Message and verify signature", sign_and_verify_shell_wrapper},
	{"shared-key", "Compute AES key", shared_key_shell_wrapper},
	{ NULL, NULL, NULL},
};

int main(void) {

	(void) puts("Welcome to RIOT Hands-on Tutorial!\nPart 3: ECC");


	char line_buf[SHELL_DEFAULT_BUFSIZE];
	shell_run(commands, line_buf, SHELL_DEFAULT_BUFSIZE);

	return 0;
}

/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        main.c
 * @brief       Tutorial on Hashing functions - Main
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
	{"SHA-256", "Perform a SHA-256 Hash", hash_sha_256_shell_wrapper},
	{"SHA3-256", "Perform a SHA3-256 Hash", hash_sha3_256_shell_wrapper},
	{"sha-256", "SHA-256 Alias", hash_sha_256_shell_wrapper},
	{"sha3-256", "SHA3-256 Alias", hash_sha3_256_shell_wrapper},
	{ NULL, NULL, NULL},
};

int main(void) {

		(void) puts("Welcome to RIOT Hands-on Tutorial!\nPart 1: Hashing Functions");

		char line_buf[SHELL_DEFAULT_BUFSIZE];
		shell_run(commands, line_buf, SHELL_DEFAULT_BUFSIZE);

		return 0;
}

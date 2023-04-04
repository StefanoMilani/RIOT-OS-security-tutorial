/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        main.c
 * @brief       Tutorial on AES - Main
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
#include "encrypt.h"

static const shell_command_t commands[] = {
	{"aes", "Encrypt and then decrypt a given string (random str if none specified) using aes 128", aes_encrypt_shell_wrapper},
	{ NULL, NULL, NULL},
};

int main(void) {

	(void) puts("Welcome to RIOT Hands-on Tutorial!\nPart 2: AES 128");

	make_aes_128_key();

	char line_buf[SHELL_DEFAULT_BUFSIZE];
	shell_run(commands, line_buf, SHELL_DEFAULT_BUFSIZE);

	return 0;
}

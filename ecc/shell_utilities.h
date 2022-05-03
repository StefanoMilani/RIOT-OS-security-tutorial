/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        shell_utilities.h
 * @brief       Tutorial on ECC - Shell Utilities Definitions
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#ifndef SHELL_UTILITIES_H
#define SHELL_UTILITIES_H

int compute_ecc_keys_shell_wrapper(int argc, char **argv);

int sign_and_verify_shell_wrapper(int argc, char **argv);

int shared_key_shell_wrapper(int argc, char **argv);

#endif // SHELL_UTILITIES_H

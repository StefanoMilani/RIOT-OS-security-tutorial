/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        shell_utilities.h
 * @brief       Tutorial on Hashing functions - Shell Utilities Definitions
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#ifndef SHELL_UTILITIES_H
#define SHELL_UTILITIES_H

// SHA-256 shell function wrapper
int hash_sha_256_shell_wrapper(int argc, char **argv);

// SHA3-256 shell function wrapper
int hash_sha3_256_shell_wrapper(int argc, char **argv);

#endif // SHELL_UTILITIES_H

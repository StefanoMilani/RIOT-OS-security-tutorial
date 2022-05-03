/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        hashing.h
 * @brief       Tutorial on Hashing functions - Hashing Functions Definitions
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#ifndef HASHING_H
#define HASHING_H

int hash_sha_256(const char *msg);

int hash_sha3_256(const char *msg);

#endif

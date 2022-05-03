/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        encrypt.h
 * @brief       Tutorial on AES - AES Functions definitions
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#ifndef ENCRYPT_H
#define ENCRYPT_H

int make_aes_128_key(void);

int aes_128_encrypt(char *msg);

#endif

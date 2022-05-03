/**
 * @ingroup     IoT Course RIOT Security Hands-on Tutorials
 * @{
 *
 * @file        ecc.h
 * @brief       Tutorial on ECC - ECC Functions definitions
 *
 * @author      Stefano Milani <milani@diag.uniroma1.it>
 *
 * @}
 */

#ifndef ENCRYPT_H
#define ENCRYPT_H

int compute_ecc_keys(void);

int sign_and_verify_msg(char *msg);

int compute_shared_key(void);

#endif

# RIOT OS Security Tutorial
IoT course @ La Sapienza University of Rome (A.Y.: 2021/2022)

## Before Starting
Clone the repository
```
git clone git@github.com:StefanoMilani/RIOT-OS-security-tutorial.git
```
or
```
git clone https://github.com/StefanoMilani/RIOT-OS-security-tutorial.git
```
Recommended ssh access.

## Init and update the submodules
Execute `cd RIOT-OS-security-tutorial`.


#### If you have SSH access skip this step
If you do not have ssh access enabled open `.gitmodules` with your favorite text editor and substitute the url section with the https link:
```
	url = https://github.com/RIOT-OS/RIOT.git
```

#### Init submodule
```
git submodules init
```
#### Update the submodule
```
git submodules update
```

## Part 1: Hashing

In file `hashing/hashing.c`
- Implement the function `hash_sha_256` that compute the SHA-256 of the string given in input
- Implement the function `hash_sha3_256` that compute the SHA3-256 of the string given in input

[Useful link](https://doc.riot-os.org/group__sys__hashes.html)

##  Part 2: AES

In file `aes/encrypt.c`

- Implement the function `make_aes_key` that initialize the aes context
- Implement the function `aes_128_encrypt` that encrypt the string given in input
- Implement the function `aes_128_decrypt` that decrypt the string given in input.

The function `aes_128_decrypt` shall be called at the end of the `aes_128_encrypt`. No parameters are provided (you have to choose them).

[Useful link](https://doc.riot-os.org/group__sys__hashes.html)

## Part 3: ECC

In file `ecc/ecc.c`

- Implement the function `compute_ecc_keys` that compute the ECC private/public key pair.
- Implement the function `sign_and_verify_msg` that sign the string given in input and then verifies the signature.
- Implement the function `compute_shared_key` that compute two ECC private/public key pair and then compute the two shared secrets. Afterwards, compare the computed secrets and check if they matches.

[Useful link](https://github.com/kmackay/micro-ecc)

## References

[Course website](http://ichatz.me/Site/InternetOfThings2022)

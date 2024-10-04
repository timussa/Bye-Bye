#pragma once

#include <iostream>


/*
* Function for encrypting text using the Caesar cipher
* Accepts: a string of any length in English and key
*/
void encryptUsingTheCaesarCipher(std::string& s, int shift);


/*
* Function for decrypting text using the Caesar cipher
* Accepts: a string of any length in English and key
*/
void decryptUsingTheCaesarCipher(std::string& text, int shift);
#include "shifr.h"


/*
* Function for encrypting text using the Caesar cipher
* Accepts: a string of any length in English and key
*/
void encryptUsingTheCaesarCipher(std::string& text, int shift)
{
    for (char& c : text)
    {
        // if it's a letter
        if (isalpha(c))
        {
            char base = islower(c) ? 'a' : 'A';
            c = char(int(base + (c - base + shift) % 26));
        }
    }
}


/*
* Function for decrypting text using the Caesar cipher
* Accepts: a string of any length in English and key
*/
void decryptUsingTheCaesarCipher(std::string& text, int shift)
{
    encryptUsingTheCaesarCipher(text, 26 - shift);
}
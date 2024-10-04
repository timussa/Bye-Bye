#include "shifr.h"


void main()
{
	setlocale(LC_ALL, "");

	std::cout << "------------------------------------------------------------------------------------\n";
	std::cout << "========== Welcome to the cipher/decoder of text using the Caesar cipher. ==========\n";
	std::cout << "------------------------------------------------------------------------------------\n\n";

	std::string text = "I love it when hairy men get smeared with oil";
	int shift = 5;

	std::cout << "The text \"" << text << "\" after the Caesar cipher encryption with a shift " << shift << ":\n";
	encryptUsingTheCaesarCipher(text, shift);
	std::cout << "\"" << text << "\".\n";
	std::cout << std::endl;

	decryptUsingTheCaesarCipher(text, shift);
	std::cout << "The decrypted text (in its original form): \n\"" << text << "\".\n";
	std::cout << std::endl;


	system("pause");
}

#include "encryptorator.hpp"
#include <cstddef>
#include <iostream>

std::byte charToByte(const char *chars){
    std::byte *bytes;

    for(unsigned int i = 0; i < sizeof(chars); i++)
        bytes[i] = (std::byte)chars[i];
}



const char *Encryptorator::encrypt(const char *input) {
    std::byte bytes = charToByte(input);

    std::cout << "test" << std::endl;

    return "";
}

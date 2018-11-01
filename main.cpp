#include <iostream>

#include "Dictionary.hpp"

int main() {
    Dictionary d{};
    d.read_file();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
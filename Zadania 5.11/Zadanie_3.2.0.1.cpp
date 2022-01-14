#include <iostream>
#include <string>

auto main () -> int
{
    std::string slowo = "Hello, World!";
    std::string *wskaznik = &slowo;

    std::cout << *wskaznik << "\n";


    return 0;
}
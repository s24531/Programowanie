#include <iostream>
#include <string>

auto main (int argc, char* argv []) -> int
{
    auto const a = std::string{argv[1]};
    std::string haslo;
    do
    {
        std::cout << "password: ";
        std::cin >> haslo;
    } while (haslo!=a);
std:: cout <<"ok!\n";
    

    return 0;
}


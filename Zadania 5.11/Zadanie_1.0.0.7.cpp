#include <iostream>

auto main() -> int
{
    float liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

    if(liczba>0)
    {
        std::cout << "1\n";
    }
    else if(liczba<0)
    {
        std::cout << "-1\n";
    }
    else
    {
        std::cout << "0\n";
    }

    return 0;
}
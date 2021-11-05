#include <iostream>

auto main() -> int
{
    float liczba;

    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    
    if(liczba>=0)
    {
        std::cout << liczba << "\n";
    }
    else
    {
        std::cout << liczba-liczba-liczba << "\n";
    }

    return 0;
}
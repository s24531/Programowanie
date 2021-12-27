#include <iostream>

auto main() -> int
{
    int liczba, silnia=1;

    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;

    for(auto i=1;i<=liczba;i++)
    {
        silnia=silnia*i;
    }

    std::cout << liczba << "! = " << silnia << "\n";
    return 0;
}
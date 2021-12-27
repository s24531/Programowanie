#include <iostream>

auto main() -> int
{
    int i=0, liczba, silnia=1;

    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;

    do
    {
        ++i;
        silnia=silnia*i;
    } 
    while (i!=liczba);

    std::cout << liczba << "! = " << silnia << "\n";
    return 0;
}
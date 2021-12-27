#include <iostream>

auto main() -> int
{
    int i=0, liczba, silnia=1;

    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;

    while(i!=liczba)
    {
        i++;
        silnia=silnia*i;
    }

    std::cout << liczba << "! = " << silnia << "\n";
    return 0;
}
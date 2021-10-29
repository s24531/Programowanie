#include <iostream>

auto main() -> int
{
    int i, liczba, liczba2, zlicz=0;
    int tab[liczba];

    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;

    for(auto i=liczba; i>=1; --i)
    {
        std::cout << "liczba : " << i << " ";
        if (liczba%i==0)
        {
            zlicz++;
            i=tab[i];
        }
    }

    if(zlicz>2)
    {
        std::cout << "Liczba " << liczba << " nie jest liczbą pierwszą\n";
    }
    else
    {
        std::cout << "Liczba " << liczba << " jest liczbą pierwszą\n";

        // std::cout << "Suma liczb pierwszych wynosi " << j << "\n";
    }
    return 0;
}
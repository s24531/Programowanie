#include <iostream>

auto main() -> int
{
    int liczba;

    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;
    
    int zlicz = 0;

    for(auto i=liczba; i>=1; --i)
    {
        if (liczba%i==0)
        {
            zlicz++;
        }
    }

    if(zlicz>2)
    {
        std::cout << "Liczba " << liczba << " nie jest liczbą pierwszą\n";
    }
    else
    {
        std::cout << "Liczba " << liczba << " jest liczbą pierwszą\n";
    }
    return 0;
}
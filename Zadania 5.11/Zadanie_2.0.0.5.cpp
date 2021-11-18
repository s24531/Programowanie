#include <iostream>

bool czy_pierwsza (int n)
{
    int licz=0;

    for (auto i=n; i>=1; i--)
    {
        if(n%i==0)
        {
            licz++;
        }
    }

    if (licz==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

auto main() -> int
{
    int liczba, zlicz=0;
    int suma=0;
    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;

    for(auto i=liczba-1; i>=1; i--)
    {
        if (czy_pierwsza(i))
        {
            suma = suma+i;
        }
    }

    if(czy_pierwsza(liczba))
    {
        std::cout << "Liczba " << liczba << " jest liczbą pierwszą\n";
        std::cout << "Suma liczb pierwszych wynosi: " << suma << "\n";
    }
    else
    {
        std::cout << "Liczba " << liczba << " nie jest liczbą pierwszą\n";
    }
    return 0;
}
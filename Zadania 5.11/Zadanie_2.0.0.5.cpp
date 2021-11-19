#include <iostream>

<<<<<<< HEAD
auto main() -> int
{
    int suma=0, liczba, zlicz=0;

    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;

    for(auto i=liczba; i>=2; i--)
    {
        std::cout << i << "p\n";
        if(liczba%i==0)
            {
                zlicz++;
                for(auto x=liczba; x>=2; x--)
                {
                    std::cout<< i << "\n";
                    if(x%i==0)
                    {
                        suma=suma+i;
                        std::cout << i << "\n";
                    }       
                }
            }
    }

    if(zlicz>2)
    {
        std::cout << "Liczba " << liczba << " nie jest liczbą pierwszą\n";
    }
    else
    {
        std::cout << "Liczba " << liczba << " jest liczbą pierwszą\n";
        std::cout << "Suma liczb pierwszych wynosi: " << suma << "\n";
    }
    
    return 0;

}
=======
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
>>>>>>> 4b1003e0f5fb79080c7b803d9c7e7a04f702a337

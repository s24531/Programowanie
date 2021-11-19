#include <iostream>

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

#include <iostream>

auto main() -> int
{
    int dzielnik, limit, suma=0;
    
    std::cout << "Podaj limit: ";
    std::cin >> limit;

    std::cout << "Podaj dzielnik: "; 
    std::cin >> dzielnik;
    
    for(auto i=0;i<=limit;i++)
    {
        if(i%dzielnik==0)
        {
            suma=suma+i;
        }
    }

    std::cout << "Suma wynosi: " << suma << "\n";
    return 0;
}
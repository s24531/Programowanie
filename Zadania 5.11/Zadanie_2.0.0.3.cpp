#include <iostream>

auto main() -> int
{
    int a, b, s;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> a;

    std::cout << "Podaj drugą liczbę: ";
    std::cin >> b;

    do
    {
        std::cout << "Podaj krok: ";
        std::cin >> s;
        if (s==0)
        {
            std::cout << "Krok nie może mieć wartości zero\n";
        }    
    } while (s==0);

    if(b>a)
    {
        for(auto i=a; i<b; i=i+s)
        {
            std::cout << i << " ";
        }
    }

    if(b<a)
    {
        for (auto i=a; i>b; i=i-s)
        {
            std::cout << i << " ";
        }
    }

    std::cout << "\n";
    return 0;
}

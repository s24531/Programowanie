#include <iostream>

auto main() -> int
{
    int a;
    int b;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> a;

    std::cout << "Podaj drugą liczbę: ";
    std::cin >> b;

    for(auto i=a; i<b; i++)
    {
        std::cout << i << " ";
    }
    
    return 0;
}
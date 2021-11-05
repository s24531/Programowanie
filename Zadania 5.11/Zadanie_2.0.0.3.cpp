#include <iostream>

auto main() -> int
{
    int a;
    int b;
    int s;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> a;

    std::cout << "Podaj drugą liczbę: ";
    std::cin >> b;

    do
    {
        std::cout << "Podaj trzecią liczbę: ";
        std::cin >> s;
        if (s==0)
        {
            std::cout << "Krok nie może mieć wartości zero\n";
        }    
    } while (s==0);

    for(auto i=a; i<b; i=i+s)
    {
        std::cout << i << " ";       
    }
    
    return 0;
}
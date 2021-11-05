#include <iostream>

auto main() -> int
{
    float a,b,c;

    std::cout << "Podaj a: ";
    std::cin >> a;

    std::cout << "Podaj b: ";
    std::cin >> b;

    std::cout << "Podaj c: ";
    std::cin >> c;

    if(c>b && c>a)
    {
        std::cout << c << "\n";
    }
    else if(b>c && b>a)
    {
        std::cout << b << "\n";
    }
    else if(a>b && a>c)
    {
        std::cout << a << "\n";
    }

    return 0;
}
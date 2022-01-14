#include <iostream>

auto is_palindrome(std::string wyraz) -> bool
{
    std::string odwrocony;
    int dlugosc;

    dlugosc = wyraz.length(); 
        
    for(auto i=0; i<dlugosc; i++)
    {
        odwrocony += wyraz[dlugosc - i - 1];
    }
        
    if(wyraz!=odwrocony)
    {
        return false;
    }
    else
    {
        return true;
    }
}

auto main() -> int
{
    std::string wyraz;

    std::cout << "Podaj wyraz: ";
    std::cin >> wyraz;

    if(is_palindrome(wyraz))
    {
        std::cout << "Wyraz " << wyraz << " jest palindromem\n";
    }
    else
    {
        std::cout << "Wyraz " << wyraz << " nie jest palindromem\n";
    }

    return 0;
}
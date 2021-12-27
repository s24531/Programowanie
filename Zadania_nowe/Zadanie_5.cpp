#include <iostream>

auto is_even(int n) -> bool
{
    if(n%2==0)
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
    int liczba;
    
    std::cout << "Podaj liczbę: ";
    std::cin >> liczba;

    if(is_even(liczba))
    {
        std::cout << "Liczba jest parzysta\n";
    }
    else
    {
        std::cout << "Liczba nie jest parzysta\n";
    }


    return 0;
}
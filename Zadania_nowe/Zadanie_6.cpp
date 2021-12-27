#include <iostream>

auto is_divisible(int n, int d) -> bool
{
    if(n%d==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

auto is_even(int n, int d) -> bool
{
    if(is_divisible(n,d))
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
    int liczba, dzielnik;
    
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

    std::cout << "Podaj dzielnik: ";
    std::cin >> dzielnik;

    if(is_even(liczba, dzielnik))
    {
        std::cout << "Liczba " << liczba << " jest podzielna przez " << dzielnik << "\n";
    }
    else
    {
        std::cout << "Liczba " << liczba << " nie jest podzielna przez " << dzielnik << "\n";
    }


    return 0;
}
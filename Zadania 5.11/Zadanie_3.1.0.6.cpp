#include <iostream>

auto search (int a[], int needle) -> int
{
    int licz=0;
    for(auto i=0; i<10; i++)
    {
        if(needle==a[i])
        {
            return i;
            break;
        }
        else
        {
            t++;
        }
    }
    if(licz==10)
    {
        return -1;
    }
}

auto main() -> int
{
    int a[10] = { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
    int liczba;

    std::cout << "Szukana liczba: ";
    std::cin >> liczba;

    std::cout << "Podana liczba ma indeks: " << search(a, liczba) << "\n";

    return 0;
}
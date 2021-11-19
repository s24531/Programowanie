#include <iostream>

auto asum (int a[], int n) -> int
{
    int suma;
    for(auto i=0; i<n; i++)
    {
       suma = suma + a[i];
    }
    return suma;
}

auto main() -> int
{
    int a[100];
    int n;

    std::cout << "Rozmiar: ";
    std::cin >> n;

    for(auto i=0; i<n; i++)
    {
        std::cout << "a[" << i << "]: ";
        std::cin >> a[i];
    }

    std::cout << "Suma wszystkich liczb z tablicy: " << asum(a, n) << "\n";

    return 0;
}
#include <iostream>

auto amin (int a[], int n) -> int
{
    int min=a[0];
    for(auto i=0; i<n; i++)
    {
        if(min>a[i]) min=a[i];
    }
    return min;
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

    std::cout << "Najmniejsza liczba w tablicy: " << amin(a, n) << "\n";

    return 0;
}
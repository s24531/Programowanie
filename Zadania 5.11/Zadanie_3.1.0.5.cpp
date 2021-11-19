#include <iostream>

auto amax (int a[], int n) -> int
{
    int max=a[0];
    for(auto i=0; i<n; i++)
    {
        if(max<a[i]) max=a[i];
    }
    return max;
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

    std::cout << "Największa liczba w tablicy: " << amax(a, n) << "\n";

    return 0;
}
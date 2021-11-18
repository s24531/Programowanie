#include <iostream>

auto iota (int a[], int n, int liczba)
{
    a[n];
    for(auto i=0; i<n; i++)
    {
       a[i] = liczba; 
       liczba = liczba + 1;
    }
}

auto main() -> int
{
    int a[100];
    int n, liczba;
    
    std::cout << "Rozmiar: ";
    std::cin >> n;

    std::cout << "Liczba od której chcesz zacząć: ";
    std::cin >> liczba;

    iota(a, n, liczba);
    
    for(auto i=0; i<n; i++)
    {
        std::cout << "a[" << i << "] = " << a[i] << "\n";
    }
   
    return 0;
}
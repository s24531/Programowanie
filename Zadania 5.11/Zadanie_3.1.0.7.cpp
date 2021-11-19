#include <iostream>

auto sort_asc(int a[], int n) -> void
{
    int tym;
    for(auto i=0; i<n; i++)
    {
        for(auto j=0; j<n; j++)
        {
           if(a[j]>a[j+1])
           {
               tym=a[j];
               a[j]=a[j+1];
               a[j+1]=tym;
           }
        }
    }
}

auto main() -> int
{
    int a[100];
    int n;

    std::cout << "Rozmiar: ";
    std::cin >> n;

    for(auto i=0;i<n;i++)
    {
        std::cout << "a[" << i << "]: ";
        std::cin >> a[i];
    }
    
    sort_asc(a,n);
    
    std::cout << "\nPosortowane: \n";
    for(auto i=0;i<n;i++)
    {
        std::cout << "a[" << i << "]: " << a[i+1] << "\n";
    }

    return 0;
}
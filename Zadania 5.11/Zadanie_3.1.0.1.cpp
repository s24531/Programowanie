#include <iostream>

auto init (int a[], int n) -> void
{
    a[n];
    for(auto i=0; i<n; i++)
    {
       a[i] = 0; 
    }
}

auto main() -> int
{
    int a[100];
    int n;
    
    std::cout << "Ilość zer w tablicy: ";
    std::cin >> n;
    
    init(a, n);
    
    for(auto i=0; i<n; i++)
    {
        std::cout << "a[" << i << "] = " << a[i] << "\n";
    }
   
    return 0;
}

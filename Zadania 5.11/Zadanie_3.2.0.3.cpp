#include <iostream>

auto swap(int *a, int *b) -> void
{
    int tym;

    tym = *a;
    *a = *b;
    *b = tym;
}

auto main() -> int
{
    auto a = int{42};
    auto b = int{64};
    
    std::cout << "\nPrzed zamianą: \na: " << a << "\nb: " << b << "\n";
    
    swap(&a, &b);
    
    std::cout << "\nPo zamianie: \na: " << a << "\nb: " << b << "\n";
    return 0;
}
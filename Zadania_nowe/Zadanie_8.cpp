#include <iostream>
#include <string>

auto co_ile(std::string slowo, int n)
{
    for(auto i=0;i<slowo.length();i=i+n)
    {
        std::cout << slowo[i];
    }
}

auto main() -> int
{
    std::string slowo;
    int n;

    std::cout << "Podaj slowo: ";
    std::cin >> slowo;

    std::cout << "Podaj co ile ma się wyswietlac znak: ";
    std::cin >> n;

    co_ile(slowo,n);
    std::cout << "\n";
    return 0;
}
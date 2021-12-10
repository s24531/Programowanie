#include <iostream>
#include <string>

auto count_chars(std::string slowo, char znak) -> int
{
    int licz=0;

    for(auto i=0;i<slowo.length();i++)
    {
        if(slowo[i]==znak)
        {
            licz++;
        }
    }
    return licz;
}

auto main() -> int
{
    std::string slowo;
    char znak;

    std::cout << "Podaj slowo: ";
    std::cin >> slowo;

    std::cout << "Podaj sprawdzany znak: ";
    std::cin >> znak;

    std::cout << "Ilośc znakow " << znak << " w slowie " << slowo << " : " << count_chars(slowo,znak) << std::endl;


    return 0;
}
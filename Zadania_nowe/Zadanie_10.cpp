#include <iostream>
#include <vector>
#include <string>

auto max (std::vector<std::string> slowa) -> int
{
    int max=slowa[0].length();

    for(auto i=0; i<5; i++)
    {
        if(max<slowa[i].length()) 
        max=slowa[i].length();
    }

    return max;
}

auto box_print(std::vector<std::string> slowa)
{
    int dlugosc = max(slowa);
    int dl;

    for (auto i = 0; i < dlugosc+4; i++)
    {
        std::cout << "*";
    }
    std::cout << "\n";

    for (auto i = 0; i < 5; i++)
    {   
        if(dlugosc==slowa[i].length())
        {
            std::cout << "* " << slowa[i] << " *\n";
        }
        else
        {
            dl = dlugosc-slowa[i].length();
            std::cout << "* " << slowa[i];
            for (auto j = 0; j < dl; j++)
            {
                std::cout << " ";
            }
            std::cout << " *\n";
        }
    }
    
    for (auto i = 0; i < dlugosc+4; i++)
    {
        std::cout << "*";
    }
    std::cout << "\n";
    

}

auto main() -> int
{
    std::vector<std::string> slowa{};
    std::string slowo;

    for (auto i = 0; i < 5; i++)
    {
        std::cout << "Podaj " << i+1 << " slowo: ";
        std::cin >> slowo;
        slowa.push_back(slowo);
    } 

    box_print(slowa);  

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

auto filter_palindromes(std::vector<std::string> words, int ilosc) -> std::vector<std::string>
{
    std::string odwrocony;
    std::string wyraz;
    int dlugosc;

    for(auto j=0; j<ilosc; j++)
    {
        wyraz = words[j];
        dlugosc = wyraz.length(); 
        
        for(auto i=0; i<dlugosc; i++)
        {
            odwrocony += wyraz[dlugosc - i - 1];
        }
        
        if(wyraz!=odwrocony)
        {
            words.erase(words.begin()+j);
        }
        odwrocony="";
    }

    return words;
}

auto main() -> int
{
    auto wyrazy = std::vector<std::string>{};
    std::string wyraz;
    int ilosc;

    std::cout << "Podaj ilosc wyrazow: ";
    std::cin >> ilosc;

    for(auto i=0;i<ilosc;i++)
    {
        std::cout << "Podaj " << i+1 << " wyraz: ";
        std::cin>>wyraz;
        wyrazy.push_back(wyraz);
    }

    std::cout << "Palindromy: " << filter_palindromes(wyrazy, ilosc) << "\n";

    return 0;
}
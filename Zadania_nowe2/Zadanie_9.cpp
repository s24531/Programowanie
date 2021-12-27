#include <iostream>
#include <vector>

auto contains_all(std::vector<int> zbior1, std::vector<int> zbior2)
{
    int licz=0;

    for (auto i = 0; i < zbior2.size(); i++)
    {
        for (auto j = 0; j < zbior1.size(); j++)
        {
            if(zbior2[i]==zbior1[j])
            {
                licz++;
            }
        }
        
    }
    
    if(licz==zbior2.size())
    {
        std::cout << "Drugi zbiór jest pozbiorem pierwszego\n";
    }
    else
    {
        std::cout << "Drugi zbiór nie jest pozbiorem pierwszego\n"; 
    }

}

auto main() -> int
{
    std::vector<int> zbior1;
    std::vector<int> zbior2;
    int ilosc1, ilosc2, liczba;


    std::cout << "Podaj rozmiar zbioru: ";
    std::cin >> ilosc1;

    for(auto i=0; i<ilosc1; i++)
    {
        std::cout << "Podaj " << i+1 << " liczbe w zbiorze: ";
        std::cin>>liczba;
        zbior1.push_back(liczba);
    
    }


    std::cout<< "Podaj rozmiar podzbioru: ";
    std::cin >> ilosc2;

    for(auto i=0; i<ilosc2; i++)
    {
        std::cout << "Podaj " << i+1 << " liczbe w podzbiorze: ";
        std::cin>>liczba;
        zbior2.push_back(liczba);
    
    }

    contains_all (zbior1, zbior2);

    return 0;
}
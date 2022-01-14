#include <iostream>
#include <vector>
#include <string>

auto wyswietl_litery(std::vector<std::string> alfabet, std::vector<std::string> zakres)
{
    std::string litera1, litera2, litery;
    int licz=0, licz2=0;
    std::string temp;

    for(auto i = 0; i < zakres.size(); i++)
    {
        litery = zakres[i];
        litera1 = litery[0];
        litera2 = litery[2];

        for (auto j = 0; j < alfabet.size(); j++)
        {
            temp=alfabet[j];
            if(litera1 == temp)
            {
                licz=j;
            }
            if(litera2 == temp)
            {
                licz2=j;
            }
        }
        
        if(licz>licz2)
        {
            std::swap(licz,licz2);
        }

        std::cout << litera1 << " " << litera2 << ": ";
        if(licz!=licz2)
        {
            for (auto k = licz; k <= licz2; k++)
            {   
                std::cout << alfabet[k];
            }
        }
        else
        {
            std::cout << alfabet[licz];
        }
        std::cout << "\n";
    }
}

auto main() -> int
{
    std::string litery;
    std::vector<std::string> zakres;

    auto alfabet = std::vector<std::string>{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    do
    {
        std::cout << "Podaj zakres liter: ";
        std::getline(std::cin, litery);
        if(litery!="stop")
        {
            zakres.push_back(litery);
        }
    }
    while(litery!="stop");


    wyswietl_litery(alfabet, zakres);

    return 0;
}
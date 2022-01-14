#include <iostream>
#include <vector>
#include <string>


auto main() -> int
{
    int meskie=0, zenskie=0;

    auto imiona = std::vector<std::string>{};
    std::string imie;

    for(auto i=0;i<5;i++)
    {
        std::cout << "Podaj " << i+1 << " imie: ";
        std::cin>>imie;
        imiona.push_back(imie);
    }

    for(auto i=0;i<5;i++)
    {
        std::cout << imiona[i] << " ";
        if(imiona[i][imiona[i].length()-1]=='a')
        {
            zenskie++;
        }
        else
        {
            meskie++;
        }
    }

    std::cout << "Podane zostalo " << zenskie << " imion zenskich oraz " << meskie << " imion meskich\n";

    return 0;
}
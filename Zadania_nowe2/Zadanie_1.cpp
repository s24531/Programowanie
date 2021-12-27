#include <iostream>
#include <vector>

auto average_of(std::vector<double> liczby) -> double
{   
    double wynik=0; 
    double srednia;

    for(auto i=0; i<=liczby.size(); i++)
    {
        wynik+=liczby[i];
    }
    
    srednia=wynik/liczby.size();

    return srednia;
}

auto main() -> int
{
    auto liczby = std::vector<double>{};
    double liczba;
    int ilosc;

    std::cout << "Podaj ilosc liczb: ";
    std::cin >> ilosc;

    for(auto i=0;i<ilosc;i++)
    {
        std::cout << "Podaj " << i+1 << " liczbe: ";
        std::cin>>liczba;
        liczby.push_back(liczba);
    }

    std::cout << "Srednia z liczby wynosi:" << average_of(liczby) << "\n";

    return 0;
}
#include <iostream>
#include <vector>

auto dot_product(std::vector<double> wektor, std::vector<double> wektor2) -> double
{
    double wynik = (wektor[0] * wektor2[0]) + (wektor[1] * wektor2[1]);
    
    return wynik;
}

auto main() -> int
{   
    auto wektor = std::vector<double>{};
    auto wektor2 = std::vector<double>{};

    double liczba, liczba2;

    for(auto i=0;i<2;i++)
    {
        std::cout << "Podaj wspolrzedne 1 wektora: ";
        std::cin>>liczba;
        wektor.push_back(liczba);
    }

    std::cout << "\n";
    
    for(auto i=0;i<2;i++)
    {
        std::cout << "Podaj wspolrzedne 2 wektora: ";
        std::cin>>liczba2;
        wektor2.push_back(liczba2);
    }

    std::cout << "Iloczyn skalarny wynosi: " << dot_product(wektor, wektor2) << "\n";

    return 0;
}
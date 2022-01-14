#include <iostream>
#include <vector>

auto dot_product(std::vector<double> wektor, std::vector<double> wektor2) -> double
{
    double wynik = 0;

    for(auto i = 0; i < wektor.size(); i++)
    {
        wynik = wynik + (wektor[i] * wektor2[i]); 
    }


    return wynik;
}

auto main() -> int
{   
    auto wektor = std::vector<double>{};
    auto wektor2 = std::vector<double>{};

    double liczba, liczba2;

    int wiel = 0;
    std::cout << "Podaj wielkosć wektora: ";
    std::cin >> wiel;

    for(auto i=0;i<wiel;i++)
    {
        std::cout << "Podaj wspolrzedne 1 wektora: ";
        std::cin>>liczba;
        wektor.push_back(liczba);

        std::cout << "Podaj wspolrzedne 2 wektora: ";
        std::cin>>liczba2;
        wektor2.push_back(liczba2);
        std::cout<<std::endl;
    }

    std::cout << "Iloczyn skalarny wynosi: " << dot_product(wektor, wektor2) << "\n";

    return 0;
}
#include <iostream>
#include <string>

auto main() -> int
{
    std::string imie;
    double waga;
    int wzrost;

    imie = "Bartek";
    waga = 80;
    wzrost = 190;

    std::cout << "Imie: " << imie << "\n\n";
    std::cout << "Waga: " << waga << " kg" << std::endl << std::endl;
    std::cout << "Wzrost: " << wzrost << " cm" << std::endl;

    return 0;
}
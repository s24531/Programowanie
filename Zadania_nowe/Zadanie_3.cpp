#include <iostream>

auto main() -> int
{
    std::string imie, imie2;

    std::cout << "Podaj pierwsze imie: ";
    std::cin >> imie;

    std::cout << "Podaj drugie imie: ";
    std::cin >> imie2;

    int dl = imie.length();
    int dl2 = imie2.length();

    if(dl>dl2)
    {
        std::cout << "Pierwsze imie jest dluzsze!\n";
    }
    else if(dl<dl2)
    {
        std::cout << "Drugie imie jest dluzsze...\n";
    }
    else
    {
        std::cout << "Dlugosc imion jest taka sama.\n";
    }

    return 0;
}
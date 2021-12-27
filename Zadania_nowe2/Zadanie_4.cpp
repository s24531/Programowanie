#include <iostream>
#include <vector>

struct student
{
    std::string imie;
    std::string nazwisko;
    std::vector<double> oceny;
};

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
    srand(time(NULL));
    auto stud1 = student();

    stud1.imie = "Bartek";
    stud1.nazwisko = "Sokolowski";

    for (int i = 0; i < 5; i++)
    {
        stud1.oceny.push_back(rand()%6);
    }

    std::cout << "Oceny studenta: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << stud1.oceny[i] << " ";
    }
    std::cout << "\nSrednia ocen wynosi: " << average_of(stud1.oceny) << "\n";

    return 0;
}
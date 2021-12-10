#include <iostream>
#include <string>
#include <sstream>

bool liczba_pierwsza(int n)
{
    int licz=0;

    for (auto i=n; i>=1; i--)
    {
        if(n%i==0)
        {
            licz++;
        }
    }

    if (licz==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

auto main() -> int
{
    std::stringstream pierwsze;

    for(int i=2; i<=20; i++)
    {
        if(liczba_pierwsza(i))
        {
            pierwsze << i << " ";
        }
    }
    std::string a = pierwsze.str();
    std::cout << "1 linijka: " << a << "\n";
    std::cout << "2 linijka: " << a << "\n";

    return 0;
}
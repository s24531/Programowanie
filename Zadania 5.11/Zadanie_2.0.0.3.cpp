#include <iostream>

auto main() -> int
{
    int a, b, s;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> a;

    std::cout << "Podaj drugą liczbę: ";
    std::cin >> b;

    do
    {
        std::cout << "Podaj krok: ";
        std::cin >> s;
        if (s==0)
        {
            std::cout << "Krok nie może mieć wartości zero\n";
<<<<<<< HEAD
        }    
        if (s<0)
        {
            std::cout << "Krok nie może być ujemny\n";
        }
    } while (s>0);

    for(auto i=a; i<b; i=i+s)
=======
        }
    } 
    while (s==0);
      
    if(a<b)
    {
        for(auto i=a; i<b; i=i+s)
        {
            std::cout << i << " ";       
        }
    }
    else
>>>>>>> 4b1003e0f5fb79080c7b803d9c7e7a04f702a337
    {
        for (auto i=a; i>b; i=i-s)
        {
            std::cout << i << " ";
        }
        
    }

    std::cout << "\n";
    return 0;
}

include <iostream>

auto main() -> int
{
    int a;
    int b;
    int c;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> a;

    std::cout << "Podaj drugą liczbę: ";
    std::cin >> b;

    do
    {
        std::cout << "Podaj trzecią liczbę: ";
        std::cin >> c;
        if (c==0)
        {
            std::cout << "Nie można dzielić przez zero\n";
        }    
    } while (c==0);

    for(auto i=a; i<b; i++)
    {
        if(i%c==0)
        {
            std::cout << i << " ";
        }
    }
    
    return 0;
}

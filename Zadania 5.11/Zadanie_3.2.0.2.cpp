#include <iostream>

auto print(std::string a) -> void
{   
    std::cout << &a << " = " << a << "\n";
}


auto main() -> int
{
    std::string b;
    
    std::cout << "Podaj słowo: ";
    std::cin>>b;
    print(b);

    return 0;
}
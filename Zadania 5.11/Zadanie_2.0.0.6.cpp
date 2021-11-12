#include <iostream>
#include <string>

auto main (int argc, char* argv []) -> int
{
    auto a = std::stoi(argv[1]);
    
    for(auto i=2; i<=argc-1; i++)
    {
        if(a>std::stoi(argv[i]))
        {
            std::cout << a << " > " << std::stoi(argv[i]) << "\n"; 
        }
        else if (a<std::stoi(argv[i]))
        {
            std::cout << a << " < " << std::stoi(argv[i]) << "\n"; 
        }
        else
        {
            std::cout << a << " = " << std::stoi(argv[i]) << "\n"; 
        }
    }

    return 0;
}
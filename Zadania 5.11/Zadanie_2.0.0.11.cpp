#include <iostream>


auto main (int argc, char* argv []) -> int
{
	auto const a = std::stoi(argv[1]);
	auto const b = std::stoi(argv[2]);

    for(auto i=1; i<=a;i++)
    {
        std::cout << "*";

        for(auto j=1; j<=b; j++)
        {
            std::cout << "*";
        }   
         
        std::cout << "\n";    
    }
    return 0;
}
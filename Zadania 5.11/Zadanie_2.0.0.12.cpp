#include <iostream>


auto main (int argc, char* argv []) -> int
{
	auto const a = std::stoi(argv[1]);

    for(auto i=a; i>=1;i--)
    {
        for(auto j=i; j<=a; j++)
        {
            std::cout << "*";
        }   
         
        std::cout << "\n";    
    }
    return 0;
}
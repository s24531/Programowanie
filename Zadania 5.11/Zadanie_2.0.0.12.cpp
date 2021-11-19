#include <iostream>


auto main (int argc, char* argv []) -> int
{
	auto const a = std::stoi(argv[1]);

<<<<<<< HEAD
    for(auto i=a; i>=i;i--)
    {
        for(auto j=i; j>=a; j--)
=======
    for(auto i=a; i>=1;i--)
    {
        for(auto j=i; j<=a; j++)
>>>>>>> 4b1003e0f5fb79080c7b803d9c7e7a04f702a337
        {
            std::cout << "*";
        }   
         
        std::cout << "\n";    
    }
    return 0;
}
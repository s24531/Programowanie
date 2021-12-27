#include <iostream>


auto main (int argc, char* argv []) -> int
{
	auto const a = std::stoi(argv[1]);

    for(auto i=1; i<=a;i++)
    {
        for(auto j=1; j<=a; j++)
        {
            if(i==1 || j==1 || i==a || j==a)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }   
         
        std::cout << "\n";    
    }
    return 0;
}
#include <iostream>
#include <string>

auto main (int argc, char* argv []) -> int
{
    auto const a = std::stoi(argv[1]);

    for (auto i=1; i<=a; ++i)
    {   
        if(i%15==0 || i%3==0 || i%5==0)
        {
            if(i%15==0)
            {
                std::cout << i << " FizzBuzz\n";
            }
            else if(i%3==0)
            {        
                std::cout << i << " Fizz\n";         
            }
            else if(i%5==0)
            {
                std::cout << i << " Buzz\n";
            }
        }
        else
        {
            std::cout << i << "\n";
        }
    }
    return 0;
}


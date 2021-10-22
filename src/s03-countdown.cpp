#include <iostream>
#include <string>

auto main (int argc, char* argv []) -> int
{
    auto const a = std::stoi(argv[1]);
    for(auto i=a;i>=0;--i)
    {
        std::cout << i << "\n";
    }
    return 0;
}

